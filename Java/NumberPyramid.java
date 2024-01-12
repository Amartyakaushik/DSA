import java.util.*;

public class NumberPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            // Space
            int space=rowcount-row-1;
            for(int col=0; col<space; col++){
                System.out.print(" ");
            }
            // Values
            int value=row+1;
            for(int col=0; col<value; col++){
                System.out.print(value+" ");
            }
            System.out.println();
        }
    }
}

//        1
//       2 2
//      3 3 3
//     4 4 4 4
//    5 5 5 5 5