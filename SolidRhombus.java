import java.util.*;

public class SolidRhombus {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            //  Space
            for(int col=0; col<(rowcount-row-1);col++){
                System.out.print(" ");
            }
            // Star
            for(int col=0; col<rowcount; col++){
                System.out.print("*");
            }
            System.out.println();
        }
        
    }
}

//             * * * * *
//           * * * * *
//         * * * * *
//       * * * * * 
//     * * * * *