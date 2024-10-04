//5.Wap to print factorial of given number //
#include<stdio.h>
main()
{
	int num,i,factorial=1;
	printf("Enter a number to find factorial : ");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++)
	{
		factorial *=i;
	}
	printf("factorial is :%d",factorial);
}
