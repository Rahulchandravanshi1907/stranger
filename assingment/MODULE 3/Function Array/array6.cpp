//6.Wap to make addition,subtraction and multiplication of two matrix using 2-D array //
#include<stdio.h>
#define MAX 3 //Fixed size for the matrix
main()
{
	int matrixA[MAX][MAX],matrixB[MAX][MAX],result[MAX][MAX];
	int i,j,k;
	
	//input Matrix A
	printf("Enter elements for matrix A (%dx%d) :\n",MAX,MAX);
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	//input Matrix B
	printf("Enter elements for matrix B (%dx%d) :\n",MAX,MAX);
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			scanf("%d",&matrixB[i][j]);
		}
	}
	
	//Addition
	printf("Matrix A + Matrix B:\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			result[i][j] = matrixA[i][j] + matrixB[i][j];
			printf("%d",result[i][j]);
		}
		printf("\n");
	}
	
	//Subtration
	printf("Matrix A - Matrix B:\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			result[i][j] = matrixA[i][j] - matrixB[i][j];
			printf("%d",result[i][j]);
		}
		printf("\n");
	}
	
	//multiplication
	printf("Matrix A * Matrix B:\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			result[i][j] = matrixA[i][j] * matrixB[i][j];
			printf("%d",result[i][j]);
		}
		printf("\n");
	}
	
}
