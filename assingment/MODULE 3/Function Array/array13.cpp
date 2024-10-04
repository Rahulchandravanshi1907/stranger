//13.Wap to accept 5 numbers from user and check entered number is even or odd using of array //
#include<stdio.h>
main()
{
	int numbers[5],i;
	printf("Enter 5 number:\n");
	for(i=0;i<5;i++){
		printf("Number %d: ",i+1);
		scanf("%d",&numbers[i]);
	}
	printf("\ncheck if numbers are even or odd:\n");
	
	for(i=0;i<5;i++){
		if(numbers[i] % 2 == 0){
			printf("Number %d is even.\n",numbers[i]);
		}else{
			printf("Number %d is odd.\n",numbers[i]);
		}
	}
}
