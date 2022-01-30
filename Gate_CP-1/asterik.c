void main()
{
  int i=10, j=20, *pi, *p1;
  // float f=5.4, *pf;
  pi=&i;
  p1=&j;
  printf("%d",pi);
  printf("\n%d",p1);
  printf("\n%d",p1-pi);

  /*printf("\nAddress of p = %u",&p);
  printf("\nAddress of i = %u",p);
  printf("\nSize of p = %d",sizeof(p));*/

}
