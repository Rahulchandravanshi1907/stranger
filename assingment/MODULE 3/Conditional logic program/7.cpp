//7.Check pass or fail //
#include<stdio.h>
main()
{
	int marks;
	int passingMark = 50;
	
	printf("Enter your marks: ");
	scanf("%d",&marks);
	
	if(marks >= passingMark){
		printf("You have passed.\n");
     }
     else{
     	printf("You have failed.\n");
	 }
}
