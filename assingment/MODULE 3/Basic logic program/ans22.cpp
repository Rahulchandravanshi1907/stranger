//22. Calculate compound interest //

#include<stdio.h>
main()
{
    double P,R,t,amount,compoundinterest;
	printf("Enter the principal amount : ");
	scanf("%lf",&P);
	printf("Enter the annual interest rate in percentage : ");
	scanf("%lf",&R);
	printf("Enter the time in years : ");
	scanf("%lf",&t);
	
	Amount =P*pow((1+R/100),t);
	compoundinterest =Amount - P;
	
	printf("The total amount after %.2lf years is: %.2lf\n",t,amount);
	printf("The compound interest earned is: %.2lf\n",t,compoundinterest);
}
