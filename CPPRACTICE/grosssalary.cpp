/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
		Basic Salary <= 10000 : HRA = 20%,  DA =  80%
		Basic Salary <= 20000 : HRA = 25%, DA = 90%
		Basic Salary > 20000 : HRA = 30%,  DA =    95% */
#include<stdio.h>
int main(){
	float basic,gross;
	float da,hra;
	
	printf("Enter a basic salary=");
	scanf("%2f",&basic);

hra=(basic<=10000)?0.2*basic:
		
	(basic<=20000)? 0.25*basic:
		           0.3*basic;
		          
	             

da=(basic<=10000)?0.8*basic:
		
	(basic<=20000)? 0.9*basic:
		           0.95*basic;
		          
	gross=basic+hra+da;
	
	printf("gross salary of employee %2f",gross); 
	
}		
		
		
		
