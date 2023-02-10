#include<stdio.h>
#include<conio.h>
void main()
{
float principle, time, rate, si;
printf("enter principle (amount):");
scanf("%f",&principle);
printf("enter time:");
scanf("%f",&time);
printf("enter rate:");
scanf("%f",&rate);
si=(principle*time*rate)/100;
printf("simple interest=%f",si);
getch();
}