#include <stdio.h>

int main()
{
    int a,b,c,sum;
    sum = (a=8, b=7, c=9, a+b+c);
    printf("sum = %d",sum);
    printf("\nsize = %d",sizeof(sum));
    return 0;
}
