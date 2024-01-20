import java.util.*;;

public class NumericHollowHalfPyramid02 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the rowcount: ");
        int rowcount=sc.nextInt();

        for(int row=1; row<=rowcount; row++){
                if(row==1 ){
                    for(int col=1; col<=rowcount; col++){
                        System.out.print(col);
                    }
                }else{
                    for(int col=0; col<=rowcount-row; col++){
                        if(col==0 ){
                            System.out.print(row);
                        }else if(col==rowcount-row){
                            System.out.print(rowcount);
                        }else{
                            System.out.print(" ");
                        }
                    }
                }
            System.out.println();
        }
        
    }
}

//    1 2 3 4 5   
//    2     5
//    3   5
//    4 5
//    5