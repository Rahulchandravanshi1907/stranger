//8.Write a program to find out the max from given number (e.g no: -1562 Max number 6) //
#include<stdio.h>
#include<stdlib.h>
main()
{
	int number,maxDigit = 0;
	printf("Enter a number : ");
	scanf("%d",&number);
	
	number = abs(number);
	
	if (number==0){
		maxDigit = 0;
	}else{
		while(number > 0){
			int digit = number % 10;
			if(digit>maxDigit){
				maxDigit = digit;
			}
			number /=10;
		}
	}
	printf("max digit is %d\n",maxDigit);
}
