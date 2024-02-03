import java.util.*;

public class ReverseInteger {
    public static void main(String[] args) {
        Scanner read= new Scanner(System.in);
        System.out.print("Enter number: ");
        int num=read.nextInt();

        int ans=0, rem=0;
        // for -ve numbers...
        boolean isneg=false;
        if(num<0){
            isneg=true;
            num = -num;
        }
        // for +ve numbers...
        while(num>0){
            int remainder=num%10;
            ans=ans*10 + remainder;
            num=num/10;
        }
        // System.out.print(ans);
        // isneg ? System.out.print(ans) : System.out.print(ans);
        if(isneg){
            System.out.println(-ans);
        }else{
            System.out.println(ans);
        }
    }
}
