//8.Write a program in c to count the total number of vowels or consonants in a string //
#include<stdio.h>
main()
{
	char str[100];
	int vowels = 0, consonants;
	int i =0;
	
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	
	while (str[i] != '\0'){
		char ch = str[i];
		
		if ((ch >='A' && ch<='Z') || (ch >='a' && ch<='z')){
		ch = (ch >='A' && ch<='Z') ? ch+32 : ch;  //convert to lowercase
		if (ch =='a' || ch=='e' || ch =='i' || ch=='o' || ch =='u'){
			vowels++;
		}else{
			consonants++;
		}
		}
		i++;
	}
	printf("Total vowels :%d\n",vowels);
	printf("Total vowels :%d\n",consonants);
}
