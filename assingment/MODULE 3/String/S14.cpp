//14. Write a program in c to combine two strings manually.  //
#include<stdio.h>
main()
{
	char str1[100], str2[100],combined[200];
	int i=0, j=0;
	
	printf("Enter the first string : ");
	fgets(str1,sizeof(str1),stdin);
	
		
	printf("Enter the first string : ");
	fgets(str2,sizeof(str2),stdin);
	
	\
	//remove newline characters if present 
	while (str1[i] != '\0' && str2[j] != '\n'){
		combined[i] = str2[j];
		i++;
	}
	while (str2[i] != '\0' && str2[j] != '\n'){
		combined[i] = str2[i];
		i++;
	    j++;
	}
	combined[i] = '\0';
	printf("Combined string:%s\n",combined);
}
