import java.util.*;

public class perApp{

public static void main(String x[]){
Scanner sc=new Scanner(System.in);

int persentage=sc.nextInt();
System.out.println("Enter a persentage");

int total=sc.nextInt();
System.out.println("Enter a total number of day");

int absent=sc.nextInt();
System.out.println("Enter a total absent");


if(persentage<75){
 Attendace=total-absent;
 System.out.println("Enter total persentage="+Attendace);


System.out.println("you are eligible of exam");

}
else{

System.out.println("you are not eligible of exam");

}

}
}