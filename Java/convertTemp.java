import java.util.*;

public class convertTemp {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter temperature in celcius: ");
        double temp=sc.nextDouble();

        double kelvin= (temp + 273.50);
        double farenheit = (temp * 1.80) + 32;
        System.out.println(temp + " degree celcius \n" + kelvin + " kelvin \n" + farenheit + " degree farenheit");
    }
}
