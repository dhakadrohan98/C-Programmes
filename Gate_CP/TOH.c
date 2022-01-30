/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

void toh(int n, char src, char dest, char aux)
{
    if(n==1)
    {
        printf("\n move disk 1 from %c to %c",src,dest);
        return;
    }

    toh(n-1,src,aux,dest);
    printf("\n move disk %d from %c to %c",n,src,dest);
    toh(n-1,aux,dest,src);
}

int main()
{
   int n;
   scanf("%d",&n);
   toh(n,'A','C','B');
   return 0;
}
