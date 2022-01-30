#include<stdio.h>
#include<math.h>

int multiply(int a,int b)
{
    int i=10;
    printf("\na = %d\nb = %d",a,b);
    return a*b;
}

void main()
{
    //printf("sqrt(3) = %f",sqrt((int)4));
    int k,m=3, i=10;
   // printf("\n%d\t%d\t%d",--i,i++,i);
    k = multiply(m,++m);
    printf("\nk = %d",k);
}
