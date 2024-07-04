
//wap a C program to input cost price and selling price of a product and check profit
#include<stdio.h>
int main()
{

int costprice,sellingprice;

printf("ENTER A COST PRICE");
scanf("%d",&costprice);

printf("ENTER A SELLING PRICE");
scanf("%d",&sellingprice);

(costprice>=sellingprice)?printf("profi"):printf("loss");


}
