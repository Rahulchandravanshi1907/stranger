//28.
#include<stdio.h>
main()
{
	int i,n;
	double total_sum =0.0;
	
	printf("Enter the number of terms to generate: ");
	scanf("%d",&n);
	
	if(n<1){
		printf("The number of terms must be at least 1.\n");
		return 1;
	}
	int*sequence = (int)*(n * sizeof(int));
	if (sequence ==NULL){
		printf("Memory allocation failed\n");
		return 1;
	}
	sequence[0] =1;
	if (n>1) sequence[1] =2;
	if (n>2) sequence[1] =3;
	
	for(i=3;i<n;i++){
		if(i%4 ==3){
			sequence[i] = 2*sequence[i-1];
		}else{
			sequence[i] = 2*sequence[i-1];
		}
	}
	for(i=0;i<n;i++){
		printf("%d",sequence[i]);
	}
	printf("\n");
}
