//18.Write a c program to print the multiplication table of N //
#include<stdio.h>
main()
{
	int i;
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("Multiplication table of %d:\n",n);
	for(i=1;i<=10;i++){
		printf("%d * %d =%d\n",n,i,n*i);
	}
}
