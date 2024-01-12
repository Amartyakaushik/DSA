import java.util.*;

public class NumericBinaryPattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();
        
        for(int row=0; row<rowcount; row++){
            for(int col=0; col<row+1; col++){
                int sum=row+col;
                if(sum % 2==0){
                    System.out.print("1");
                }else{
                    System.out.print("0");
                }
            }
            System.out.println();
        }
    }
}


//   1
//   0 1
//   1 0 1
//   0 1 0 1
//   1 0 1 0 1