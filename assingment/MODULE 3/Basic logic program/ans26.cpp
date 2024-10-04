//26.Convert temparature Fehrenheit to Celsius //

#include<stdio.h>
main()
{
	int Fehrenheit,celsius;
	
	printf("Enter temparature in Fahrenheit: ");
	scanf("%lf",&Fahrenheit);
	
	celsius =(fahrenheit - 32) * 5.0/9.0;
	
	printf("Temperature in celsius: %.2lf\n",celsius);
}
