#include<stdio.h>
void display();
int i;
struct employee
{
	int empno;
	char empname[100];
	char deptname[100];
	int salary;
};
struct employee e[3];
void main()
{
	
	for(i=0;i<3;i++)
	{
		printf("Employee %d details:\n",i+1);
		printf("Enter employee number: ");
		scanf("%d",&e[i].empno);
		printf("Enter employee name: ");
		fflush(stdin);
		gets(e[i].empname);
		printf("Enter the depatment name: ");
		fflush(stdin);
		gets(e[i].deptname);
		printf("Enter employee salary: ");
		scanf("%d",&e[i].salary);
		printf("\n\n");
	}
	display();
}
void display()
{
	printf("    Employee number\tEmployee name\tDepatment name\tSalary\n\n");
	for(i=0;i<3;i++)
	{
		printf("%d-\t%d\t\t%s\t\t%s\t\t%d\n",i+1,e[i].empno,e[i].empname,e[i].deptname,e[i].salary);
	}
}
