import java.util.*;
 public class di{
 
public static void main(String x[]){

   Scanner sc=new Scanner(System.in);

   int no;

  System.out.println("Enter a number");

     no=sc.nextInt();

    if(no %5==0 && no %11==0){

      System.out.println("number divisible of 5 and 11");

  }
else{


      System.out.println("number not divisible");
}
}

}
