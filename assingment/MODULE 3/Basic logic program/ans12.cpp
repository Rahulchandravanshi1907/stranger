//12. Accept  number of students from user.I nedd to give 5 apples to each students.How many apples are required? ///

#include<stdio.h>
main()
{
	int student,apple;
	printf("Enter the number of present student : ");
	scanf("%d",&student);
	
	apple =student*5;
	printf("required apple is :%d",apple);
}
