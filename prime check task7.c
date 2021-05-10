#include<stdio.h>
int count=0;
int check_prime(num,p)
{
	if(p==0)
	return 0;
	if(num%p==0)
	count++;
	check_prime(num,p-1);
	return count;
}
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(check_prime(n,n)==2)
	printf("%d is a prime number.",n);
	else
	printf("%d is not a prime number.",n);
}
