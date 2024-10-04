//12.Wap to accept 5 students name and store it in array //
#include<stdio.h>
#include<string.h>
main()
{
	char names[5][100];
	int i;
	
	printf("Enter the names of 5 stiudents:\n");
	for(i=0;i<5;i++){
		printf("students %d:",i+1);
		fgets(names[i],sizeof(names[i]),stdin);
		
		size_t len = strlen(names[i]);
		if (len > 0 && names[i][len - 1] == '\n'){
			names[i][len - 1] = '\0';
		}
	printf("\nstudent name :\n ");
	for(i=0;i<5;i++){
		printf("students %d: %s\n",i+1,names[i]);
	}
}
