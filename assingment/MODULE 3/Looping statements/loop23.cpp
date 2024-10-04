//22.
#include<stdio.h>
main()
{
	int n,rev;
	printf("Enter number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rev=n%10;
		printf("%d",rev);
		n=n/10;
	}
}
