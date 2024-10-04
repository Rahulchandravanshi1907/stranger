//27.
#include<stdio.h>
main()
{
	int i,n;
	double total_sum = 0.0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		double term = (double)i / (i+1);
		
		if((i-1) % 4 ==0){
			total_sum +=term;
		}else{
			total_sum -=term;
		}
	}
	printf("The total sum of the series is:%0.4f\n",total_sum);
}
