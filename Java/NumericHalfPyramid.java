import java.util.*;

public class NumericHalfPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0;row<rowcount;row++){
            for(int col=0;col<row+1;col++){
                System.out.print(col+1);
            }
            System.out.println();
        }

    }
}
