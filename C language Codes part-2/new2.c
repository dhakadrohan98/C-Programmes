int* r()
{
      int *result_count = 5;

      static int a[5] = {1, 2, 3, 4, 5};

      return a;
 }

 main()
 {
     int *p,i;
     p=r();
     for(i=0; i<5; i++)
     printf("%d ",*p);
     getch();
 }
