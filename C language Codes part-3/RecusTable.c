#include<stdio.h>
#include<conio.h>
int mul(int n,int i);
main()
{
    int n,i=1;
    printf("enter the number\n");
    scanf("%d",&n);
    mul(n,i);
}
int mul(int n,int i)
{
    if(i>10)
    {
        return 0;
    }
    else
    {
        printf("%d*%d=%d\n",n,i,n*i);
        return mul(n,i+1);
    }
}
