//Q1. Write a menu-driven program in c using switch case
#include<stdio.h>

int main(){
	int choice;
	float a,b,c;
	
	printf("Enter first number");
	scanf("%f",&a);
	
	printf("Enter second number");
	scanf("%f",&b);
	
	printf("Enter a choice");
	scanf( "%d",&choice);
	
	switch(choice){
	

	case 1:
		c=a+b;
		printf("this is a %f addition\n",c);
	
		break;
			
			case 2:
				c=a+b;
		printf("this is a %f subtraction\n",c);
	
		break;
			
			case 3:
				c=a*b;
		printf("this is a  %f multification/n",c);
		
		break;
			
			case 4:
				c=a/b;
		printf("this is a %fdivition\n",c);
		
		break;
		default:
			printf("invalide choice");
			
	
	}
		
}
