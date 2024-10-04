//15.Convert school's name in abbreviated form. ///

#include<stdio.h>
main()
{
	char firstname[15],middlename[15],lastname[15];
	printf("Enter first name of school : ",firstname);
	scanf("%d",&firstname);
	
	printf("\nEnter middle name of school : ",middlename);
	scanf("%d",&middlename);
	
	printf("\nEnter last name of school : ",lastname);
	scanf("%d",&lastname);
	
	printf("\nFull name of school is :%d",firstname,middlename,lastname);
	printf("\nAbbreviated name of school is :%d",firstname[15],middlename[15],lastname[15]);
}
