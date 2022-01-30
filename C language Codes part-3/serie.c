#include<stdio.h>
#include<conio.h>

float powr(m,n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
        p=p*m;
    return(p);
}

float fact(n)
{
   float f=1;
   int i;
   for(i=1;i<=n;i=i+1)
        f=f*i;
   return(f);
}


float s1(n)
{
    float c=0;
    int i;
    for( i=1; i<=n; i++)
        c=c+(1/powr(i,i));
    return(c);
}

float s2(n)
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



float s3(int n)
{
    float g=0;
    int i;
    for(i=1; i<=n; i++)
        g=g+(1/fact(i));
    return(g);
}

main()
{
    int n;
    printf("enetr a no: ");
    scanf("%d",&n);
    printf("\n1st series = %f",s1(n));
    printf("\n2nd series = %f",s2(n));
    printf("\n3rd series = %f",s3(n));
    getch();
}

