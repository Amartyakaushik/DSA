import java.util.*;

public class NumericPattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        int temp=1;
        for(int row=0; row<rowcount; row++){
            for(int col=0; col<row+1; col++){
                System.out.print(temp+" ");
                temp++;
            }
            System.out.println();
        }
    }
}

//    1
//    2  3
//    4  5  6
//    7  8  9  10
//    11 12 13 14 15