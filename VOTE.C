#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("enter the age of person:");
scanf("%d",& age);
if(age>=18)
printf("person is eligible for voting");
else
printf("person is not eligible for voting");
getch();
}