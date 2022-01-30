#include <stdio.h>

int main()
{
   int n, m=1;

   printf("Enter a number to reverse\n");
   scanf("%d", &n);

   while (n != 0)
   {
      m = m *(n%10);
      n = n/10;
   }

   printf("Reverse of entered number is = %d\n",m);

   return 0;
}
