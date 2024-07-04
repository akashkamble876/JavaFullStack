import java.util.*;

public class leapapp{
public static void main(String x[]){

  Scanner sc=new Scanner(System.in);

    int year;
   System.out.println("Enter year");
   
    year=sc.nextInt();
    boolean leapyear;

  leapyear=(year%4==0);
  leapyear=leapyear && (year % 100!=0||year%400==0);

   System.out.println("Enter leap year");

if(leapyear) {
      System.out.println(leapyear + " is a leap year.");
    } else {
      System.out.println(leapyear + " is not a leap year.");
    

}
}
}