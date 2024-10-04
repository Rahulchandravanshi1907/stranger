//16.Calculate the sum of natural numbers using the while loop //
#include<stdio.h>
main()
{
	int i=1;
	int sum=0;
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n<1){
		printf("Please enter a positive integer\n");
	}
	else{
		while(i<=n){
			sum +=i;
			i++;
		}
		printf("Sum of natural numbers up to %d =%d\n",n,sum);
	}
}
