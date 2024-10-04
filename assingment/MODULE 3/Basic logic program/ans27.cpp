//27.Convert days into months //

#include<stdio.h>
main()
{
	int totaldays;
	int months;
	int days_remaining;
	
	printf("Enter the number of days: ");
	scanf("%d",&totaldays);
	
	months = totaldays/days_in_month;
	days_remaining = totaldays % days_in_month;
	
	printf("%d days is approximately %d months and %d days.\n",totaldays,months);
}
