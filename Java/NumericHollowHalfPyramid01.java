import java.util.*;

public class NumericHollowHalfPyramid01 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            for(int col=0; col<row+1; col++){
                if(col==0 || col==row || row==rowcount-1){
                    System.out.print(col+1);
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

    }
}


//   1 
//   1 2 
//   1   3
//   1     4 
//   1       5
//   1         6
//   1 2 3 4 5 6 7