//9.Wap to show difference between structure and union //
#include<stdio.h>
#include<string.h>

struct Employee{
	int empno;
	char empname;
	float salary;
};

union data{
	int intVal;
	float floatVal;
	char str[50];
};

main()
{
	struct Employee emp;
	emp.empno = 1001;
	strcpy(emp.empname, "Alice");
	emp.salary = 50000.50;
	
	printf("Structure Example:\n");
	printf("Employee number:%d\n",emp.empno);
	printf("Employee name:%d\n",emp.empname);
	printf("Employee salary: %.2f\n",emp.salary);
	
	union Data data;
	
	data.intVal = 10;
	printf("\nUnion Example:\n");
	printf("Data as int:%.2f\n",data.intVal);
	
	data.floatVal = 15.75;
	printf("Data as float:%.2f\n",data.floatVal);
	
	strcpy(data.str,"Hello");
	printf("Data as string: %s\n",data.str);
	
	printf("After overwriting with string:\n");
	printf("Data as int:%d\n",data.intVal);
	printf("Data as float:%.2f\n",data.floatVal);
	printf("Data as string:%s\n",data.str);
}
