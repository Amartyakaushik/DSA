import java.util.*;;

public class FancyNumericPattern01 {
    public static void main(String[] args){
        Scanner read=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=read.nextInt();

        for(int row=0; row<rowcount; row++){
            // /For space
            int space=rowcount-row-1;
            for(int col=0; col<space; col++){
                System.out.print(" ");
            }
            // For 1st half values
            int col;
            int temp=row+1;
            for(col=0; col<row+1;col++){
                System.out.print(temp);
                temp++;
            }
            // System.out.print("   "+row);
            for(col=2*(col-1); col>row; col--){
                System.out.print(col);
            }
            System.out.println();

        }
    }
}

//           1 
//         2 3 2
//       3 4 5 4 3
//     4 5 6 7 6 5 4 
//   5 6 7 8 9 8 7 6 5