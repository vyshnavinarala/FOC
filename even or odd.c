#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter number:");
scanf("%d",&num);
if(num %2==0)
printf("%d is even");
else
printf("%d is odd");
getch();
}
