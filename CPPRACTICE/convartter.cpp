#include<stdio.h>
int main(){
	
	char ch;
	
	
	printf("Enter a charactor");
	scanf("%c",&ch);
	int i=ch;
	(i>=97 && i<=122 || i>=65 && i<=90)?printf("this is charactor"):
		
		(i>= 48 && i<=57)?printf("this a integer"):printf("this is spacial symbol");
		
	
	}
