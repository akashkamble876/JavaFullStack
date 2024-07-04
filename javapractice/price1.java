import java.util.*;

public class price1{

public static void main(String x[]){

Scanner sc= new Scanner(System.in);
  int costprice,selligprice,prifit,loss;
    
System.out.println("Enter a pricecost price");

costprice=sc.nextInt();

System.out.println("Enter a sellingprice");


selligprice=sc.nextInt();


if(costprice<selligprice){
    
    prifit= costprice-selligprice;
 System.out.println ("propit");

}
else{
System.out.println("LOSS");

}
}
}