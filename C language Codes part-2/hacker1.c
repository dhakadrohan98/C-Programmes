#include<stdio.h>
#include<conio.h>
int* r(int* a,int* b, int n)
{
    static int a1[100];
    static int b1[100];
    static int c1[2]; //statically declared here for returning of array c1.
    int i,m,p,c2=0,c3=0;

    printf("enter size of 1st array: ");
    scanf("%d",&m);

    /*if(m<=1||m>=100)
    {
        while(m<=1||m>=100)
        {
            printf("Again enter size of 1st array such that (1<= m <=100): ");
            scanf("%d",&m);
        }
    }*/

    if(m>=1&&m<=100)
    {
        for(i=0; i<m; i++)
            scanf("%d",&a1[i]);
    }

    printf("enter size of 2nd array: ");
    scanf("%d",&p);

    /*if(n<=1||n>=100||p!=m)
    {
        while(n<=1||n>=100||p!=m)
        {
            printf("Again enter size of 2nd array such that (1<= n <=100)&(m=n): ");
            scanf("%d",&p);
        }
    }*/
    if(p<=100&&p>=1)
    {
        for(i=0; i<p; i++)
            scanf("%d",&b1[i]);
    }

    if(m=p)
    {
      printf("comparison:\n");
      for(i=0; i<m; i++)
      {
          if(a[i]>b[i])
            c2=c2+1;
          if(a[i]<b[i])
            c3=c3+1;
      }
    }

    c1[0]=c2;
    c1[1]=c3;
    return c1;
}

main()
{
  int a[100],b[100],i;
  int n=100;
  int *c=r(a,b,n);
  for(i=0; i<2; i++)
    printf("%d ",c[i]);
  getch();
}
