//10.Write a program in c to extract a subtring from a given string //
#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	char substring[100];
	int start,length;
	int strLen;
	int i;
	
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	
	strLen = strlen(str);
	
	if (strLen > 0 && str[strLen - 1] == '\n'){
		str[strLen - 1] = '\0';
		strLen--;
	}
	printf("Enter the start position for substring (0-based index): ");
	scanf("%d",&start);
	printf("Enter  the length of the substring : ");
	scanf("%d",&length);
	
	if (str <0 || start >= strLen || length<0){
		printf("Invalid start position or length.\n");
	}else{
		if (start + length > strLen){
			length = strLen - start;
		}
		for (i=0;i<length;i++){
			substring[i]= str[start + i];
		}
		substring[length] = '\0';
		printf("Extracted substring :%s\n",substring);
	}
}
