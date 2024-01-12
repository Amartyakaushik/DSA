import java.util.*;

public class PallindromePattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=1; row<=rowcount; row++){
            // Space
            // int space=rowcount-row;
            for(int col=1;col<=rowcount-row; col++){
                System.out.print(" ");
            }
            // 1st half Values
            for(int col=row; col>=1; col--){
                System.out.print(col);
            }
            // //  2nd half Values
            for(int col=2; col<=row; col++){
                System.out.print(col);
            }

            System.out.println();
        }
    }
}

//          1
//         212
//        32123
//       4321234
//      543212345