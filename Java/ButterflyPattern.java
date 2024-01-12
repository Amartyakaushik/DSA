import java.util.*;

public class ButterflyPattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        // Upper half
        for(int row=1; row<=rowcount; row++){
            // 1st star
            for(int col=0; col<row; col++){
                System.out.print("*");
            }

            // Space
            int space=2*(rowcount-row);
            for(int col=0; col<space; col++){
                System.out.print(" ");
            }

            // 2nd Star
            for(int col=0; col<row; col++){
                System.out.print("*");
            }
            System.out.println();
        }

        // Lower half
        
        for(int row=rowcount; row>=1; row--){
            // 1st star
            for(int col=0; col<row; col++){
                System.out.print("*");
            }

            // Space
            int space=2*(rowcount-row);
            for(int col=0; col<space; col++){
                System.out.print(" ");
            }

            // 2nd Star
            for(int col=0; col<row; col++){
                System.out.print("*");
            }
            System.out.println();
        }

    }
}

//         *             *
//         * *         * *
//         * * *     * * *
//         * * * * * * * *
//         * * * * * * * *
//         * * *     * * *
//         * *         * *
//         *             *