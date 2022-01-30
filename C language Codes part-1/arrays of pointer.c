main()
{
 int a[10],i,*p,n;
 p=&a[0];
 scanf("%d",&n);
 printf("input: ");
 for(i=0; i<n; i++)
    scanf("%d",p+i);
 printf("output: ");
  for(i=0; i<n; i++)
 printf("%d ",*(p+i));
 getch();
}
