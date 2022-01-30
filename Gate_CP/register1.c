#include<stdio.h>
main()
{
    register int i; // If we don't initialize i then it having garbage value.
    //printf("%d\n",i);
    for(i=0; i<1000; i++)
        printf("%d\n",i);
}
