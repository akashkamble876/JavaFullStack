public class down{
 public static void main(String x[]){
  
 int amount=2528;

 int count500=0,count100=0,count50=0,count20=0,count10=0,count5=0,count2=0,count1=0;

if(amount>=500){
  count500=amount/500;
  amount=amount%500;
}

if(amount>=100){
 count100=amount/100;
  amount=amount%100;
}

if(amount>=50){
  count50=amount/50;
  amount=amount%50;
}

if(amount>=20){
  count20=amount/20;
  amount=amount%20;
}

if(amount>=10){
  count10=amount/10;
  amount=amount%10;
}

if(amount>=5){
  count5=amount/5;
  amount=amount%5;
}

if(amount>=2){
  count2=amount/2;
  amount=amount%2;
}

if(amount>=1){
  count1=amount/1;
  amount=amount%1;
}

  System.out.println("500="+count500);
  System.out.println("100="+count100);
  System.out.println("50="+count50);
  System.out.println("20="+count20);
System.out.println("10="+count10);
System.out.println("5="+count5);
System.out.println("2="+count2);
System.out.println("1="+count1);


}
}