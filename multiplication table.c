#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,range;
clrscr();
printf("enter an integer:");
scanf("%d",&n);
do
{
printf("enter the range(positive integer):");
scanf("%d",&range);
}
while(range<=0);
for(i=1; i<=range; i++)
{
printf("%d * %d = %d \n",n,i,n*i);
}
//return 0;
getch();
}
