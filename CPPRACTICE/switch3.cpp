/*Write a java program that takes a day of the week from the user (1-7) and prints a corresponding message.*/
#include<stdio.h>
int main(){
	
	int day;
	int choice;
	printf("Enter weak day");
	scanf("%d",&day);
	
	printf("Enter weak choice");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("Monday=");
			break;
			
			case 2:
			printf("Tuesday=");
			break;
			
			case 3:
			printf("Wednesday=");
			break;
			
			
			case 4:
			printf("Thursday=");
			break;
			
			
			case 5:
			printf("Friday=");
			break;
			
			
			case 6:
			printf("Saturday=");
			break;
			
			
			case 7:
			printf("Sunday=");
			break;
			
		default:
			printf("invalide choice place check");	
	}
	

	
	
}
