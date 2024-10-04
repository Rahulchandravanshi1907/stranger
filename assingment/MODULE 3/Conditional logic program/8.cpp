//8.Check if you are tall or not//
#include<stdio.h>
main()
{
	float height;
	printf("Enter your height in centimeters: ");
	scanf("%f",&height);
	
	if(height < 150){
		printf("You are categorised as short.\n");
	}else if(height >= 150 && height <= 180)
	{
		printf("You are categorized as average.\n");
	}
	else{
		printf("You are categorised as tall.\n");
	}
}
