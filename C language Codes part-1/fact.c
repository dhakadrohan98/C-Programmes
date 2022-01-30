#include<stdio.h>
#include<conio.h>

int power(m,n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
        p=p*m;
    return(p);
}
main()
{
    int m,n;
    printf("enter two no  ");
    scanf("%d\t%d",&m,&n);
    printf("power = %d",power(m,n));
    getch();
}
