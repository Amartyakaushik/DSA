import java.util.*;;

public class PascalsTrianglePattern {
    public static void main(String[] args){
        Scanner read= new Scanner(System.in);
        int n=read.nextInt();
        for(int i=1; i<=n; i++){
            int c=1;
            for(int j=1; j<=i; j++){
                System.out.print(c + " ");
                c=c*(i-j)/j;
            }
            System.out.println();
        }

    }
    
}

//              1 
//            1   1
//          1   2   1 
//        1   3   3   1 
//      1   4   6   4   1
//    1   5  10   10   5   1