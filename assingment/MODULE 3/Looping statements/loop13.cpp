//13.Calculate the factorial of a given number using while loop //
#include<stdio.h>
main()
{
	int num,factorial=1;
	
	printf("Enter a non-negative integer : ");
	scanf("%d",&num);
	
	if(num<0){
		printf("Factorial is not defined for negative numbers\n");
	}
	else{
		int i=1;
		while(i<=num){
			factorial *=i;
			i++;
		}
		printf("Factorial of %d = %llu\n",num,factorial);
	}
}
