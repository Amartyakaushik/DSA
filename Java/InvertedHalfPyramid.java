import java.util.*;

public class InvertedHalfPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();
        for(int row=0;row<rowcount;row++){
            for(int col=0;col<rowcount-row;col++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
