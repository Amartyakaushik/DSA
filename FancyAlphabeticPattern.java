import java.util.*;;

public class FancyAlphabeticPattern {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=0; row<rowcount; row++){
            int col;
            for(col=0; col<row+1;col++){
                int ans=col;
                char ch= (char)(ans + 'A');
                System.out.print(ch);
            }
            // col=col-1;
            for(col=row; col>=1; col--){
                int ans=col-1;
                char ch=(char)(ans+'A');
                System.out.print(ch);
            }
            System.out.println();
        }
    }
}

//  A 
//  A B A 
//  A B C B A 
//  A B C D C B A
//  A B C D E D C B A
//  A B C D E F E D C B A 