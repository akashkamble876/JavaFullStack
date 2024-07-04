import java.util.*;

public class costApp{

public static void main(String x[]){
 
Scanner sc=new Scanner(System.in);

double price=sc.nextDouble();

double tax=sc.nextDouble();


if(price>100000){
tax=price*0.15;
}

else if(price>50000 && price<=100000){
tax=price*0.10;
}
if (price<=50000){

 tax =price*0.5;

 }
System.out.println("The road tax for the vehicle is "+tax);
}
}