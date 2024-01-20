import java.util.*;

public class NumericPallindromeEquilateralPyramid02 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount= sc.nextInt();

        for(int row=1; row<=rowcount; row++){
            // for star
            int star=(rowcount*2)-row-1;
            for(int col=0; col<star; col++){
                System.out.print("*");
            }

            // for values
            for(int col=0; col<(2*row)-1; col++){
                if(col%2==0){
                    System.out.print(row);
                }else{
                    System.out.print("*");
                }
            }
            // For 2nd half star
            for(int col=0; col<star; col++){
                System.out.print("*");
            }
            System.out.println();
        }

    }
}
