//7.Wap find out length of string without using inbuilt function; //
#include<stdio.h>
main()
{
	char str[100];
	int length=0;
	
	printf("Enter a number: ");
	fgets(str, sizeof(str),stdin);
	
	while(str[length] !='\0'){
		length++;
	}
	if(str[length - 1] == '\n'){
		length++;
	}
	printf("Length of string: %D\n",length);
}
