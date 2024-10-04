//24. Accept 5 employees name and salary and count average and total salary //
#include<stdio.h>
main()
{
	int i;
	for(i=0;i<num_employees;i++)
	{
		printf("Enter the name of employee %d: ",i+1);
		scanf("%s",names[i]);
		printf("Enter the salary of %s: ",names[i]);
		scanf("%lf",&salaries[i]);
		totalsalary =salaries[i];
	}
	averagesalary =totalsalary/num_employees;
	printf("\nTotal salary: %.2lf\n",totalsalary);
	printf("average salary: %.2lf\n",averagesalary);
}
