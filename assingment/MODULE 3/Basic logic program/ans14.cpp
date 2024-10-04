//14.Find ascii value of given number. //

#include<stdio.h>
main()
{
	int i=65;
	char c='A';
	printf("Enter character for ascii value :",c);
	scanf("%d",&c);
	while(i==c)
	{
		i++;
	}
	printf("%d",c);
}
