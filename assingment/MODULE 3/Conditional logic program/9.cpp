//9.Check Uppercase or Lowercase or Digit or Special character //
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(ch >='A' && ch <= 'Z'){
		printf("%c is an uppercase latter.\n");
	} else if(ch >='a' && ch <= 'z'){
		printf("%c is a lowercase.\n",ch);
	}else if(ch >='0' && ch <= '9'){
		printf("%c is a digit.\n",ch);
	}else{
		printf("%c is a special character.\n",ch);
	}
}
