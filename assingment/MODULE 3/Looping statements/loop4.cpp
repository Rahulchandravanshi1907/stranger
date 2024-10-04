//4.Wap tp print table up to given numbers

#include<stdio.h>
main()
{
	int num,i;
	printf("Enter the number for the table : ");
	scanf("%d",&num);
	
	printf("Multiplication table for %d\n : ",num);
	for(i=0;i<10;i++){
		printf("%d x %d = %d\n",num,i,num*i);
	}
}
