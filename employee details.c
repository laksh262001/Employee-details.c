#include<stdio.h>
void readinfo();
void writeinfo();
struct employee
{
	int empno;
	char empname[50];
	char dept[50];
	int age,sal;
	
};
struct employee s;
main()
{
	printf("EMPLOYEE INFORMATION SYSTEM\n");
	readinfo();
	printf("Employee information is\n");
	writeinfo();
}
void readinfo()
{
	printf("Enter the employee ID number\n");
	scanf("%d",&s.empno);
	printf("Enter the name if employee\n");
	scanf("%s",s.empname);
	printf("Enter the age of the employee\n");
	scanf("%d",&s.age);
	printf("Enter the department of the employee\n");
	scanf("%s",s.dept);
	printf("Enter the salary of the employee\n");
	scanf("%d",&s.sal);
}
void writeinfo()
{
	printf("Employee number\t Name\t Age\t Department\t Salary\n");
	printf("%d\t\t %s\t %d\t %s\t\t %d\n",s.empno,s.empname,s.age,s.dept,s.sal);
}

