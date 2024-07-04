import java.util.*;
public class lachange{

public static void main(String x[]){

Scanner sc=new Scanner(System.in);

int day; 
System.out.println("Enter a day");

day =sc.nextInt();
if(day<=5 && day<=0){

  System.out.println("tolal change "+(day*2));
} 

  else if (day<=11 && day>=6 ){


  System.out.println("tolal change "+(day-5)*3);

}
else if (day<=15 && day>=10 ){


  System.out.println("tolal change "+(day-10)*4);

 }
else{

 System.out.println("tolal="+day);
}
}

}

