import java.util.*;

public class FancyNumericPattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount:  ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            for(int col=0; col<2*row+1;col++){
                if(col%2==0){
                    System.out.print(row+1);
                }else{
                    System.out.print("*");
                }
            }
            System.out.println();
        }

        for(int row=rowcount; row>0; row--){
            for(int col=0; col<2*row-1;col++){
                if(col%2==0){
                    System.out.print(row);
                }else{
                    System.out.print("*");
                }
            }
            System.out.println();
        }

    }
}

//  1 
//  2 * 2 
//  3 * 3 * 3 
//  4 * 4 * 4 * 4
//  4 * 4 * 4 * 4
//  3 * 3 * 3 
//  2 * 2 
//  1 