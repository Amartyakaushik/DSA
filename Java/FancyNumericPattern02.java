import java.util.*;;

public class FancyNumericPattern02 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            int col;
            for(col=0; col<row+1;col++){
                System.out.print(col+1);
            }
            // col=col-1;
            for(col=row; col>=1; col--){
                System.out.print(col);
            }
            System.out.println();
        }
    }
}

//  1 
//  1 2 1 
//  1 2 3 2 1 
//  1 2 3 4 3 2 1 
//  1 2 3 4 5 4 3 2 1
//  1 2 3 4 5 6 5 4 3 2 1