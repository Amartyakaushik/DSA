import java.util.*;

public class leftInvertedHalfPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0;row<rowcount;row++){
            for(int col=0;col<rowcount;col++){
                if(col < rowcount-row-1){
                    System.out.print(" ");
                }else{
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
