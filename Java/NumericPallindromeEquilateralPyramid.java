import java.util.*;

public class NumericPallindromeEquilateralPyramid {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=1; row<=rowcount; row++){
            // For front side pyramid
            // for space
            int space=rowcount-row;
            for(int col=0; col<space; col++){
                System.out.print(" ");
            }
            // for values
            for(int col=1; col<=row; col++){
                System.out.print(col);
            }
            // For backside pyramid
            for(int col=row; col>1; col--){
                System.out.print(col-1);
            }
            System.out.println();
        }


    }
}

//           1 
//         1 2 1
//       1 2 3 2 1 
//     1 2 3 4 3 2 1
//   1 2 3 4 5 4 3 2 1