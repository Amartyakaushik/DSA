import java.util.*;

public class InvertedFullPyramid {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=rowcount; row>=1; row--){
            // for space
            int space=rowcount-row;
            for(int col=space; col>=1; col--){
                System.out.print(" ");
            }
            //  for star
            int star=(2*row)-1;
            for(int col=0; col<star; col++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


//     * * * * * *
//      * * * * *
//       * * * *
//        * * *
//         * *
//          *