import java.util.*;

public class demo2{

public static void main(String x[]){

   Scanner sc=new Scanner(System.in);

  float math,phy,chem;
  float total=0;

System.out.println("Enter a matha subject mark");
  math=sc.nextInt();

System.out.println("Enter a phy mark");
phy=sc.nextInt();

System.out.println("Enter a chem mark");
chem=sc.nextInt();
  
   if(math>=65 && phy>=55){

    System.out.println("eligible");

    
}
else if(chem>=50){
   System.out.println("is elgible");

}
else if(total>=190){

   System.out.println("is a elgible");

}
else if(math>=140 && phy>=140){

   System.out.println("akash elgible");

   total=math+phy+chem;
   

}
else{

  System.out.println("no elgible");

}

}
}