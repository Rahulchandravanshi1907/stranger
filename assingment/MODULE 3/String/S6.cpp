//6.   //
#include<stdio.h>
main()
{
	char str[100];
	int alphabets =0, digits=0,specialChars=0;
	int i=0;
	
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	
	while(str[i] !='\0'){
		if ((str[i] >= 'A' && str[i] <='Z') || (str[i] >= 'a' && str[i] <='z'){
			alphabets++;
		}
		else if (str[i] >='0'&& str[i] <='9'){
			digits++;
		}
		else if (str[i] !='\n' && str[i] !='' && str[i] !='\t' && str[i] !='\0'){
			specialChars++;
		}
		i++;
	}
	printf("Total alphabets: %d\n",alphabets);
	printf("Total digits: %d\n",digits);
	printf("Total special characters: %d\n",specialChar);
}
