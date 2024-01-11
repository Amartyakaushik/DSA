import java.util.*;

public class home{
      public static void main(String [] args){
            Scanner sc=new Scanner(System.in);
            //Add N numbers from the user
            int N=sc.nextInt();
            int sum=0;
            for(int i=1;i<=N;i++){
                  int num=sc.nextInt();
                  sum+=num;
            }
            System.out.println(sum);

      }
}
