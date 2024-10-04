//5.Check if number is negative //
#include<stdio.h>
main()
{
	int number;
	printf("Enter an integer : ");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("\n%d is a positive number",number);
	}
	else if(number<0){
	printf("\n%d is a negative number",number);
	}
	else{
		printf("\n%d is zero",number);
	}
}
