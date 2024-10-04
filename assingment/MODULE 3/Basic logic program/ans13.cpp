//13.Find character value from ascii  //

#include<stdio.h>
main()
{
	int i;
	printf("Enter num for find character value : ");
	scanf("%d",&i);
	
	if(i>=65 &&i<122)
	{
		printf("Asscii value is :%d=%c",i);
	}
		else {
			printf("Please enter correct value");
		}
	
}
