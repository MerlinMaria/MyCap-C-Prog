#include<stdio.h>
main()
{
	int m[3][3];
	int i,j;
	int *p;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element-[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	printf("The matrix is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			p=&m[i][j];
			printf("%d\t",*p);
		}
		printf("\n");
	}
}
