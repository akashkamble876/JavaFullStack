#include<stdio.h>

int main(){
	
int num;

printf("ENTER NUMBER=");
scanf("%d",&num);

(num==0)? printf("%d is zero",num):
(num >= 0)? printf("%d is positive",num):printf("%d is nigetive",num);
}
