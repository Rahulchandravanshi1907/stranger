//26.
#include<stdio.h>
main()
{
	int n,i,total=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
	int sum=i*(i+1)/2;
	total +=sum;
	}
	printf("The total sum of the series is:%d\n",total);
}
