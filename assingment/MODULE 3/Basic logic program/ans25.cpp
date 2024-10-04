//25. Accept 5 expenses from user and find average of expense //
#include<stdio.h>
main()
{
	int i;
    for(i=0; i<NUM_EXPENSES; i++)
    {
    	printf("Enter expenses %d: ",i+1);
    	scanf("%lf",&expenses[i]);
    	totalExpenses =expenses[i];
	}
	averageExpenses = totalExpenses/NUM_EXPENSES;
	printf("\nTotal Expenses: %.2lf\n",totalExpenses);
	printf("Average Expenses: %.2lf\n",averageExpenses);
}
