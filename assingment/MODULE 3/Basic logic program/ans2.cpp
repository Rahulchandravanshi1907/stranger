/* 2. Write a program to make simple calculator (to make addition,subtraction,multiplication, division and modulo) */

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter a number : ",num1); //addition
	scanf("%d",&num1);
	printf("Enter a number : ",num2);
	scanf("%d",&num2);
	
	int total = num1+num2;
	printf("\nTotal : %d",&num1+num2);
}


