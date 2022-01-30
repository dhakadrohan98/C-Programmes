#include<stdio.h>
#include<conio.h>
float powr(m,n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
        p=p*m;
    return(p);
}

float ses(n)
{
    float c1=0,c2=0;
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            c1+=(1/powr(i,i));
        }
        else
        {
            c2+=(1/powr(i,i));
        }
    }
    return(c2-c1);
}

main()
{
    int n;
    scanf("%d",&n);
    printf("series = %f",ses(n));
    getch();
}
