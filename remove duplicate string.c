#include<stdio.h>
#include<conio.h>
void main()
{
   char s[1000],c='*';
   int i,j,k=0,n;
   clrscr();
   printf("enter the string:");
   gets(s);
   for(i=0;s[i];i++)
   {
      if(!(s[i]==c))
	for(j=i+1;s[j];j++)
	{
	   if(s[i]==s[j])
	      s[j]=c;
	}
   }
   for(i=0;s[i];i++)
   {
     s[i]=s[i+k];
     if(s[i]==c)
     {
       k++;
       i--;
       }
     }
     printf("string after removing all duplicates:");
     printf("%s",s);
     getch();
}
