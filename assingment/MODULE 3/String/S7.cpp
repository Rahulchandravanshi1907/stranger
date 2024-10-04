//7.Write a program in c to copy one string to another string. //
#include<stdio.h>
main()
{
	char source[100],destination[100];
	int i;
	
	printf("Enter the source string : ");
	fgets(source,sizeof(source),stdin);
	
	while(source[i] !='\0'){
		destination[i]=source[i];
		i++;
	}
	destination[i] = '\0';
	printf("Copied string :%s\n",destination);
}
