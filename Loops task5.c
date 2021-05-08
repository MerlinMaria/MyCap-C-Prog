#include<stdio.h>
main()
{
	int i;
	int n=2;
	while(n<=12)
	{
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("1");
		else
		printf("0");
	}
	printf("\t");
	n=n+2;
}
}
