//20. Wap program to print below output using for loop //
#include<stdio.h>
main()
{
	int rows =5;
	int cols=10;
	int i,j;
	
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%02d",i*cols + j + 1);
		}
		printf("\n");
	}
}
