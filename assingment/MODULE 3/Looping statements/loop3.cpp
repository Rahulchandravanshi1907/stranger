//3.wap to take 10 no. Input fromuser find out below values
//a.How many even numbers are there
//b.How many odd numbers are there
//c.Sum of even numbers
//d.Sum of odd numbers

#include<stdio.h>
main()
{
	int i;
	int numbers[10],even_count=0,odd_count=0,even_sum=0,odd_sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter the number %d : ",i+1);
		scanf("%d",&numbers[i]);
		
		if(numbers[i] % 2==0){
			even_count++;
			even_sum += numbers[i];
		}else{
			odd_count++;
			odd_sum += numbers[i];
		}
	}
	printf("Result : ");
	printf("Total even number : %d\n",even_count);
	printf("Total odd number : %d\n",odd_count);
	printf("Sum of even number : %d\n",even_sum);
	printf("Sum of odd number : %d\n",odd_sum);
}
