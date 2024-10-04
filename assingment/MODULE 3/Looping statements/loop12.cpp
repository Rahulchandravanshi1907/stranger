//12.Program of armstrong number in c using for loop //
#include<stdio.h>
#include<math.h>
main()
{
	int num,originalNum,remainder,result = 0,n=0;
	int temp;
	printf("Enter an integer : ");
	scanf("%d",&num);
	
	originalNum = num;
	temp = num;
	
	for(; temp !=0; temp/=10){
		n++;
	}
	temp = num;
	for(; temp !=0; temp/=10){
		remainder = temp % 10;
		result += pow(remainder,n);
	}
	if(result == originalNum){
		printf("%d is an Armstrong number\n",originalNum);
	}
	else{
    	printf("%d is not an Armstrong number\n",originalNum);
	}
}
