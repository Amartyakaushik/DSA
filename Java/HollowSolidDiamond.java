import java.util.*;

public class HollowSolidDiamond {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount:  ");
        int rowcount=sc.nextInt();

        for(int row=1; row<=rowcount; row++){
            // For space
            int space=rowcount-row;
            for(int col=space; col>=1; col--){
                System.out.print(" ");
            }
            // for star
            int star=2*(row)-1;
            for(int col=star; col>=1; col--){
                if(col==1 || col==star){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }

        for(int row=rowcount; row>=1; row--){
            // For space
            int space=rowcount-row;
            for(int col=space; col>=1; col--){
                System.out.print(" ");
            }
            // for star
            int star=2*(row)-1;
            for(int col=star; col>=1; col--){
                if(col==1 || col==star){
                    System.out.print("*");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }


    }
}

//           * 
//         *   *
//       *       * 
//     *           *
//   *               *
//   *               *
//     *           * 
//       *       *
//         *   * 
//           *