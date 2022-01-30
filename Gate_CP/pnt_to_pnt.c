#include<stdio.h>

void main()
{
    int a=5;
    int *p=&a, **q=&p;

    printf("p = %d",p);
    printf("\nq= %d",q);
    printf("\na = %d",**q);
    printf("\n&p = %d",q);
    printf("\n&q = %d",&q);

}
