//10.Wap tp perform palindrome number using for loop and fucntion //
#include<stdio.h>

int Palindrome(int num){
	int original = num;
	int reversed = 0;
	int remainder;
	
	while (num !=0){
		remainder = num%10;
		num /=10;
	}
}
main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	
	if(Palindrome (number)){
		printf("%d is a palindrome.\n",number);
	}else{
		printf("%d is not a palindrome.\n",number);
	}
}
