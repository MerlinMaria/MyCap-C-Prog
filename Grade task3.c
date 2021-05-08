#include<stdio.h>
main()
{
	int marks=0;
	printf("Enter marks: ");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	printf("Grade: A");
	else if(marks>=70&&marks<=84)
	printf("Grade: B");
	else if(marks>=55&&marks<=69)
	printf("Grade: C");
	else if(marks>=40&&marks<=54)
	printf("Grade: D");
	else if(marks<40)
	printf("Grade: F");
	else
	printf("The marks must be within 0-100");
	return 0;
}
