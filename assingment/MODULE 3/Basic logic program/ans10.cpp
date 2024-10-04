//10. Find the area of a rectangular prism formula :A=2(wl+hl+hw) //

#include<stdio.h>
main()
{
	int width,length,height,area,totalarea;
	printf("Enter the rectangular width : ",width);
	scanf("%d",&width);
	
	printf("Enter the rectangular length : ",length);
	scanf("%d",&length);
	
	printf("Enter the rectangular height: ",height);
	scanf("%d",&height);
	
	area =(width*length) + (length*height) + (height*width);
	
	totalarea =2*area;
	printf("Totalarea of rectanngular prism is :%d\n",totalarea);
	
	
}
