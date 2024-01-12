import java.util.*;

public class HollowRectangle{
   public static void main(String[] args){
      // Hollow rectangle 
      Scanner sc=new Scanner(System.in);
      System.out.print("Enter rowcount: ");
      int rowcount=sc.nextInt();

      for(int row=0;row<rowcount;row++){
         if(row==0 || row==rowcount-1){
            for(int col=0;col<rowcount-1;col++){
               System.out.print(" * ");
            }
         }else{
            System.out.print(" * ");
            for(int col=0;col<rowcount-2;col++){
               System.out.print("  ");
            }
            System.out.print(" * ");
         }
         System.out.println();
      }
      
   }
}