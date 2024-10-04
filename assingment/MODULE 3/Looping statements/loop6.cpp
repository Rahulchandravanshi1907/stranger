//6.Wap to print Fibonacci series up to given numbers //
#include<stdio.h>
main()
{
	int num;
	int a=0,b=1,next;
	
	printf("Enter the maximum value for Fibonacci series : ");
	scanf("%d",&num);
	if(num<0){
		printf("Please enter a non-negative numbers\n");
	}
	
	printf("Fibonacci series up to %d: ",num);
	
	if(num>=0){
		printf("%d",a);
	}
	while (b<=num){
		printf("%d",b);
		next = a+b;
		a=b;
		b=next;
	}
	printf("\n");
	
}
