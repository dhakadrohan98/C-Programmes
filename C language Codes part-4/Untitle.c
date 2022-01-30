#include<stdio.h>
#include<conio.h>
main()
{
 int p=1,n;
 printf("\n enter a number");
 scanf("%d",&n);
 do
 {
     printf("\n %d * %d =%d",n,p,n*p);
     p=p+1;
 }
 while(p<=10);
 getch();
}


