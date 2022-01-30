#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,i,j,count;
    printf("enter two no: ");
    scanf("%d\t%d",&a,&b);

    for(i=a+1; i<b; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("\n%d",i);
    }
    getch();
}
