#include<stdio.h>
int main(){
	
	int ch;
	
	printf("ENTER ACHARACOTOR=");
	
	scanf("%c",&ch);
	
	ch=(ch>= 'a' && ch<='z')?(ch-32):(ch>='A' && ch<='Z')?(ch+32):(ch);
	
	printf("converter charecator :%c\n",ch);
}
