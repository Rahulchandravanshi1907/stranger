//5.Wap tp take two array input from user and sort them in ascending order as per users choice //
#include<stdio.h>

void sortArray(int arr[],int n,int ascending)
{
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(ascending && arr[i] > arr[j]) || (!ascending && arr[i]<arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
		}
	}
}
void printArray(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d", arr[i]);
	}
	printf("\n")
}
main()
{
	int n1,n2,choice;
	int i;
	
	printf("Enter number of elements for the first array : ");
	scanf("%d",&n1);
	int arr[n1];
	printf("Enter %d elements for the the first array : ",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter number of elements for the second array : ");
	scanf("%d",&n2);
	int arr2[n2];
	printf("Enter %d elements for the second array : ",n2);
	for(i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}
	printf("Choose sorting order :\n1.Ascending\n2.Descending\n");
	scand("%d",&choice);
	
	int ascending = ( choice ==1);
	printf("First array : ");
	sortArray(arr1,n1,ascending);
	printArray(arr1,n1);
	
	printf("second array : ");
	sortArray(arr2,n2,ascending);
	printArray(arr2,n2);
}
