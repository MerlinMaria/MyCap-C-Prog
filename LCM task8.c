#include<stdio.h>
int lcm(int num1,int num2)
{
	static i=1;
	if(i%num1==0&&i%num2==0)
	return i;
	else
	{
		i++;
		lcm(num1,num2);
	}
}
void main()
{
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	printf("LCM of %d and %d is %d.",num1,num2,lcm(num1,num2));
	
}
