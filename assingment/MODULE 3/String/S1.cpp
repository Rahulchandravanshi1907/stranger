//1.Write a program in c to find the length of a string without using library function. //
#include<stdio.h>
main()
{
	char str[100];
	int length;
	
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	
	while (str[length] != '\0'){
		length++;
	}
	if (length > 0 && str[length - 1] == '\n'){
		length--;
	}
	printf("Length of the string :%d\n",length);
}
