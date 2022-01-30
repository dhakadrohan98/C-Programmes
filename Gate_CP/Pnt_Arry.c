#include <stdio.h>

int main()
{
    int a[5] = {5,10,15,20,25};
    int i;

    printf("Address of Array elements:");
    for(i=0; i<5; i++)
    {
        printf("\nAddress of a[%d] = %d",i,a+i);
    }

    printf("\n\nValues of Array elements:");
    for(i=0; i<5; i++)
    {
        printf("\nValues = %d",*(a+i));
    }

    return 0;
}
