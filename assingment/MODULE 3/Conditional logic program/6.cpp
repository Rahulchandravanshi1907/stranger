//6. Check if character is vowel or not //

#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%d",&ch);
	
	if(ch =='A' || ch =='E' || ch =='I'|| ch =='O' || ch =='U' || ch =='a' || ch =='e'|| ch =='i' || ch =='o'|| ch =='u')
	{
		printf("\n%d is a vowel",ch);
	}
	else{	printf("\n%d is not a vowel",ch);
	}
	
}
