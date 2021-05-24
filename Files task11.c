#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
int cnt=0;
char ch;
char rev[100];
int i=0,j;
fp = fopen("E:\MyCap\C Programming\Task11.txt","r");
printf("Input: ");
for(i=0;i<10;i++)
{
	ch=getc(fp);
	printf("%c",ch);
	cnt++;
	rev[i]=ch;
}
printf("Reverse: ");
for(j=cnt-1;j>=0;j--)
{
	printf("%c",rev[j]);
}
fclose(fp);
}
