#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],size,i,search,flag;
printf("\nplease enter the size of an array:");
scanf("%d",&size);
printf("\nplease enter %d elements of an array:\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("\nplease enter the search elements:");
scanf("%d",&search);
flag=0;
for(i=0;i<size;i++)
{
if(arr[i]==search)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\n we found the search element %d at position %d",search,i+1);
}
else
{
printf("\n sorry! we have not found the search element %d",search);
}
getch();
}
