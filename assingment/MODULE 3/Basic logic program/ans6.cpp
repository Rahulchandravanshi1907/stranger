//6.Find area of triangle formulla : A =1/2 //

#include<stdio.h>
main()
{
	int floatbase,height,area;
	 
	printf("Enter base of triangle : ",floatbase);
	scanf("%f",&floatbase);
	
	printf("Enter height of triangle : ",height);
	scanf("%f",&height);
	
	area = 0.5 * floatbase * height;
	printf("Area of triangle is : %0.2f",area);
	
	
}
