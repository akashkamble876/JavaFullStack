/*Write a menu-driven program to take a input from user and solve following oprations:

	1. find area of circle.
	2. find area of reactangle.
	3. find area of triangle.
	4. find area of circumference.*/
	
	#include<stdio.h>
	int main(){
		
		int choice;
    float radius, length, width, base, height, side,pi=3.14f;
    float area;
    
    printf("Enter a choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1:
    		printf("Enter radius of circle: ");
    		scanf("%f",&radius);
    		area=pi*radius*radius;
    		printf("Area of circle: %.f\n", area);
    		
    	    break;
    	    
    	    case 2:
    	    	printf("Enter length and width of rectangle: ");
    	    	scanf("%f %f ",&length,&width);
    	    	area=length*width;
    	    	printf("Area of Rectange: %.f\n", area);
    		    break;
    		    
    		    case 3:
    		    	printf("Enter base and height of triangle: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of triangle: %.f\n", area);
                break;
                
                case 4:
                	printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = 2 * pi * radius;
                printf("Circumference of circle: %.f\n", area);
                break;
    		    	 
    		    	 default:
    		    	 printf("Invalid choice! Please enter a valid option.\n");
	}

	}
