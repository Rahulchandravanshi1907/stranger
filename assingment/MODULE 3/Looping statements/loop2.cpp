//2.wap to accept 5 numbers from user and display all numbers //
#include<stdio.h>
main()
{
	int n[5],i;
	for(i=0;i<5;i++)
	{
		printf("Enter number : ",i+1);
		scanf("%d",&n[i]);
	}
	printf("The numbers you entered are : ");
	for(i=0;i<5;i++)
	{
		printf("number %d is %d\n",i+1,n[i]);
	}
}
