#include<stdio.h>
int main(){
	
	int year;
	
	printf("ENTER A YEAR");
	
	scanf("%d is year ",&year);
	
((year %4==0 && year %100!=0)||year % 400==0)?

printf("%d is a leap year.\n",year):
printf("%d is not leap year.\n",year);
	
}
