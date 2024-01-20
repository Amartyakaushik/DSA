import java.util.*;
public class FlippedSolidDiamond {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount:  ");
        int rowcount=sc.nextInt();

        // Upper half
        for(int row=0; row<rowcount; row++){
            // for 1st inverted half pyramid (star)
            for(int col=0; col<(rowcount-row); col++){
                System.out.print("*");
            }
            // for full pyramid (space)
            for(int col=0; col<2*row+1; col++){
                System.out.print(" ");
            }
            // for 2nd inverted half pyramid (star)
            for(int col=0; col<(rowcount-row); col++){
                System.out.print("*");
            }
            System.out.println();
        }
        // Lower half
        for(int row=rowcount; row>0; row--){
            // for 1st inverted half pyramid (star)
            for(int col=0; col<(rowcount-row); col++){
                System.out.print("*");
            }
            // for full pyramid (space)
            for(int col=0; col<2*row+1; col++){
                System.out.print(" ");
            }
            // for 2nd inverted half pyramid (star)
            for(int col=0; col<(rowcount-row); col++){
                System.out.print("*");
            }
            System.out.println();
        }

    }
}


//    * * * * * * * * 
//    * * *     * * * 
//    * *         * * 
//    *             * 
//    *             * 
//    * *         * * 
//    * * *     * * * 
//    * * * * * * * * 