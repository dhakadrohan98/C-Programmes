#include<stdio.h>
#include<process.h>

int x,s;
void main(int);

void main(x)
{
    s=s+x;
    printf("\n x=%d  s=%d",x,s);
    if(x==5)
    exit(0);
    main(x=x+1);
}
