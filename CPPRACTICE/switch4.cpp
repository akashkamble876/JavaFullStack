/*Write a java program that uses a switch statement to print the name of the month corresponding to a 
			given integer value.*/
			
#include<stdio.h>

int main(){
	
	int month,choice;
	
	printf("Enter name of Month");
	scanf("%d",&month);
	
	printf("Enter choice");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("January");
			break;
			
			case 2:
			printf("February");
			break;
			
			case 3:
			printf("March");
			break;
			
			case 4:
			printf("April");
			break;
			
			case 5:
			printf("May");
			break;
			
			case 6:
			printf("May");
			break;
			
			case 7:
			printf("July");
			break;
			
			case 8:
			printf("August");
			break;
			
			case 9:
			printf("September");
			break;
			
			case 10:
			printf("September");
			break;
			
			case 11:
			printf("November");
			break;
			
			case 12:
			printf("December");
			break;
			default:
			printf("invalide choice");
			
	}
	
}
