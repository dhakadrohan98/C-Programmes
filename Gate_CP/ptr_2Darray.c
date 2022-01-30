/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3][4]={
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
    };

    int i,j;
    for(i=0; i<3; i++)
    {
        printf("Address of %dth 1-D array = %u %u\n",i,a[i],*(a+i));

        for(j=0; j<4; j++)
        {
            printf("%d  %d\t\t",a[i][j],*(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}
