//1.Write a program to find out the max number from given array using function; //

#include<stdio.h>
main()
{
	int i,n;
	double arr[100];
	
	for(i=0;i<n;i++){
	
	printf("Enter a number%d: ",i+1);
	scanf("%lf",&arr[i]);  
  }
  for(i=1;i<n;i++){
  if(arr[0] < arr[i]){
  	arr[0]=arr[i];
  }
  }
  printf("Largest elements = %.2lf",arr[0]);
}
