import java.util.*;

public class DiamondPattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount:  ");
        int rowcount=sc.nextInt();

        // Upper half
        for(int row=1; row<=rowcount; row++){
            // spaces
            int space=rowcount-row;
            for(int col=1; col<=space; col++){
                System.out.print(" ");
            }
            // Star
            int star=(row*2)-1;
            for(int col=1; col<=star; col++){
                System.out.print("*");
            }
            System.out.println();
        }

        // lower half
        for(int row=rowcount; row>=1; row--){
            // spaces
            int space=rowcount-row;
            for(int col=1; col<=space; col++){
                System.out.print(" ");
            }
            // Star
            int star=(row*2)-1;
            for(int col=1; col<=star; col++){
                System.out.print("*");
            }
            System.out.println();
        }
        
    }
}

//           * 
//         * * *
//       * * * * * 
//     * * * * * * *
//     * * * * * * *
//       * * * * * 
//         * * *
//           * 