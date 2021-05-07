#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("The value of a before swapping: %d\n",a);
	printf("The value of b before swapping: %d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a after swapping: %d\n",a);
	printf("The value of b after swapping: %d\n",b);
	return 0;
}
