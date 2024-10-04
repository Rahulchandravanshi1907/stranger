//17. Calculate person's insurance premium based on salary  //

#include<stdio.h>
main()
{
	char name[50];
	printf("Enter customer name : ");
	scanf("%d",&name);
	
	int salary;
	printf("Enter salary : ");
	scanf("%d",&salary);
	
	float premium;
	premium =0.12 * salary;
	printf("\n%d your insurance premium based on salary slip :%.2f",name,premium);
}
