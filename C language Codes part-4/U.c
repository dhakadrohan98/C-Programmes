#include<stdio.h>

main()
{
   int n, c = 2;

   printf("Enter a number to check if it is prime\n");
   scanf("%d",&n);

   for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
      {
         printf("%d isn't prime.\n", n);
     break;
      }
   }
   if ( c == n )
      printf("%d is prime.\n", n);
 getch();
}
