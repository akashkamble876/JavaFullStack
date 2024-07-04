/*Write a menu-driven program in c using switch case.
	
	1.Check Number is positive , negative or zero. 
	2.Check Number is even or odd.
	3.Write a c program find max number using 2 number.*/
#include<stdio.h>
int main(){
	
	int choice, no;
	printf("Enter a number");
	scanf("%d",&no);
	
	
	printf("Enter a choice");
	scanf("%d",&choice);
	
	
	
	switch(choice){
		
		
		case 1:
			if(no>0){
				printf("number is positive");
			}
			else if(no<0){
				printf("number is nigetive");
				
			}
			else{
				printf("number is zeor");
				break;
				
				case 2:
					
					if(no % 2==0){
						printf("number even ");
					}
				else {
					printf("number is odd");
					
					break ;
					
					case 3:
						if(no>=0){
							printf("number is max");
						}
						else
						{
							printf("number min");
							break;
							
							default:
			printf("invalide choice");
			
						}
				}
			}
	}
	
}
