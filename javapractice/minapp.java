import java.util.*;
public class minapp{

public static void main(String x[]){

Scanner sc=new Scanner(System.in);

int no,max;

System.out.println("Enter eny number");

no=sc.nextInt();

System.out.println("Enter eny number");

max=sc.nextInt();


String str=(no<=max)?"number is min":"number is not min";

System.out.println(" number is"+str);

}
}