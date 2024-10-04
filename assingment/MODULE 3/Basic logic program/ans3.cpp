//3.Wap to find area and circumference of circle /

#include<stdio.h>
int main()
{
	int radius;
	printf("Enter the radius of circle : ");
	scanf("%d",&radius);
	printf("\nradious of circle is : %d",radius);
	
	float area = 3.14 * radius * radius;
	printf("\narea of circle is : %0.2f\n",area);
	
	float circumference = 2 * 3.14 * radius;
	printf("\ncircumference of circle is : %0.2f",circumference);
	
	
}
