//9.Write a program in c to find the maximum number of character in a string. //
#include<stdio.h>
main()
{
	char str[100];
	int freq[256] = {0};
	int maxFreq = 0;
	int i=0;
	
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	
	while (str[i] !='\0'){
		if(str[i] != '\n'){
			freq[(unsigned char)str[i]]++;
			if(freq[(unsigned char)str[i]]>maxFreq){
				maxFreq = freq[(unsigned char)str[i]];
			}
		}
		i++;
	}
	printf("Maximum number of occurrences of any character :%d\n",maxFreq);
}
