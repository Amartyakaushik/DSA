import java.util.*;

public class HollowSolidRhombus {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            // space
            int space=rowcount-row-1;
            for(int col=0; col<space;col++){
                System.out.print(" ");
            }
            // stars
            // for(int col=0; col<rowcount; col++){
            //     if(row==0 || row==rowcount-1){
            //         System.out.print("*");
            //     }else{
            //         System.out.print("*");
            //         for(int col2=0; col2<rowcount-1; col2++){
            //             System.out.print(" ");
            //         }
            //         System.out.print("*");
            //     }
            //     // System.out.println();
            // }

            // Star
            if(row==0 || row==rowcount-1){
                for(int col=0; col<rowcount; col++){
                    System.out.print("* ");
                }
            }else{
                for(int col=0; col<rowcount-1; col++){
                    if(col==0 || col==rowcount-2){
                        System.out.print("* ");
                    }else{
                        System.out.print("   ");
                    }
                }
            }
            System.out.println();

        }

    }
}

//             * * * * *
//           *        *
//         *        *
//       *        * 
//     * * * * *