//11.Write a program in c to to read a sentence and replace lowercase character with uppercase vice versa //
#include<stdio.h>
main()
{
	char str[100];
	int i=0;
	
	printf("Enter a sentence : ");
	fgets(str,sizeof(str),stdin);
	
	while (str[i] !='\0'){
		if (str[i] >='a' && str[i] <= 'z'){
			str[i]=str[i]-'a' +'A';
		}else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
}
printf("Modified sentence:%s\n",str);
}
