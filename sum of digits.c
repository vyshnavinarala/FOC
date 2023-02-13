#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,sum=0,remainder;
clrscr();
printf("enter an integer\n");
scanf("%d",&n);
t=n;
while(t!=0)
{
remainder=t%10;
sum=sum+remainder;
t=t/10;
}
printf("sum of digits of %d=%d\n",n,sum);
getch();
}
