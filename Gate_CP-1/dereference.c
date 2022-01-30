#include<stdio.h>
int main(void)
{
    int x=25, *p;
    p=&x;
    printf("Value of x = %d",x);
    printf("\nValue of p = %d",p);

    x=*p++;
    printf("\n\n[1] Value of *p = %d",*p);
    printf("\nValue of p = %d",p);
    printf("\nValue of x = %d",x);

    x=*++p;
    printf("\n\n[2] Value of *p = %d",*p);
    printf("\nValue of p = %d",p);
    printf("\nValue of x = %d",x);

    x = ++*p;
    printf("\n\n[3] Value of *p = %d",*p);
    printf("\nValue of p = %d",p);
    printf("\nValue of x = %d",x);

    x= (*p)++;
    printf("\n\n[4] Value of *p = %d",*p);
    printf("\nValue of p = %d",p);
    printf("\nValue of x = %d",x);

    return (0);
}
