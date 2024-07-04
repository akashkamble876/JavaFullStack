#include<stdio.h>

int main(){
	
	float basic, gross;
	float hra,da;
	
	printf("Enter a basic salary");
	scanf("%f",&basic);
	
	hra=(basic<=10000)? 0.2*basic:
		(basic<=20000)? 0.25*basic:
			           0.3 *basic;
			           
	da=(basic<=10000)?0.8*basic:
		(basic<=20000)?0.9*basic:
			          0.95*basic;
			          
		gross=basic+hra+da;
		
		printf("gross salary of emloyee %f",gross);
		
}
