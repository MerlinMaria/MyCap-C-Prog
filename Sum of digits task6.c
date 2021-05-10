#include<stdio.h>
int sum();
main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("Sum of digits of %d is %d.",n,sum(n));
}
int sum(int num)
	{
		if(num==0)
		return 0;
		return num%10+sum(num/10);

	}

