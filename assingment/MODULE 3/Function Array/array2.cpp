//2.

#include<stdio.h>
main()
{
	int choice;
	float num1,num2,result;
	
	while (1){
	printf("\N---Menu---\n");
	printf("1 - Addition\n");
	printf("2 - Subtraction\n");
	printf("3 - Multiplication\n");
	printf("4 - Division\n");
	printf("5 - Exit\n");
	printf("Enter your choice (1-5): ");
	scanf("%d",&choice);
	
	if (choice == 5){
		printf("Exiting the program.\n");
		break;
	}
	printf("Enter two numbers: ");
	scanf("%f %f",&num1,&num2);
	
	switch (choice){
	case 1:
	result = num1+num2;
	printf("Result: %d + %d = %d\n",num1,num2,result);
	break;
	case 2:	
	result = num1-num2;
	printf("Result: %d - %d = %d\n",num1,num2,result);
	break;
    case 3:
	result = num1*num2;
	printf("Result: %d * %d = %d\n",num1,num2,result);
	break;
	case 4:
	if(num2 != 0){
	result = num1 / num2;
	printf("Result: %d / %d = %.2lf\n",num1,num2,result);
	}else{
		printf("Error: Division by zero is not allowed.\n");
	}
	break;
	default:
		printf("Invalid choice.please enter a number between 1 and 5.\n");
		break;
	}
}
