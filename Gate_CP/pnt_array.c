/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5] = {5,10,15,20,25};
    int i;

    printf("Address of Array elements:");
    for(i=0; i<5; i++)
    {
        printf("\nAddress of a[%d] = %d",i,i+a);
    }

    printf("\n\nValues of Array elements:");
    for(i=0; i<5; i++)
    {
        printf("\nValues = %d",*(i+a));
    }

    return 0;
}
