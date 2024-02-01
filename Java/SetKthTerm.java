import java.util.*;;

public class SetKthTerm {
    public static void main(String[] args) {
        Scanner read=new Scanner(System.in);
        System.out.print("Enter your number: ");
        int num=read.nextInt();
        System.out.print("Enter the term you want to reverse: ");
        int kth_term=read.nextInt();

        int shift= 1 << kth_term;
        int ans=num | shift;
        System.out.println(ans);
    }
}
