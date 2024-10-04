//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop //
#include<stdio.h>
main()
{
	int i=0;
	int evenCount=0;
	int oddCount=0;
	int num;
	
	printf("Enter 5 numbers: ");
	while(i<5){
		printf("Number %d: ",i+1);
		scanf("%d",&num);
		
		if(num%2 ==0){
			evenCount++;
		}else{
			oddCount++;
		}
		i++;
	}
	printf("Number of even numbers =%d\n",evenCount);
	printf("Number of odd numbers =%d\n",oddCount);
}
