//4.Write a program in c to count the total number of words in a string  //
#include<stdio.h>
main()
{
	char str[100];
	int i=0;
	int wordCount=0;
	int inWord=0;
	printf("Enter a string : ");
	fgets(str, sizeof(str), stdin);
	
	while(str[i] != '\0'){
		if(str[i] == '' || str[i] == '\t' || str[i] == '\n'){
			if (inWord){
				inWord=0;
			}
		}
		else {
			if (!inWord){
				inWord=1;
				wordCount++;
			}
		}
}
printf("Total number of words : %d\n",wordCount);
}
