//2.Write a c program to read the value of an integer m and display the value of


#include<stdio.h>
main()
{
	int m,n;
	printf("Enter an integer value for m : ");
	scanf("%d",&m);
	if(m>0){
		n=1;
	}
	else if(m==0){
		n=0;
	}
	else(m<0){
		n=-1;
	}
}
