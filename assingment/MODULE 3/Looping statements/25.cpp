//25.
#include<stdio.h>
main()
{
	int n,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		sum +=i * i;
	}
	printf("The sum of the square of the first %d natural numbers is:%d\n",n,sum);
}
