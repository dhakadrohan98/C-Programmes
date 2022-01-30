
fab(int i,int j,int n,int k)
{
  int sum=0;
  if(k==n-2)
    return 0;
  else
  {
      sum=i+j;
      printf("\t%d",sum);
      i=j;
      j=sum;
      k++;
      return fab(i,j,n,k);
  }
}

main()
{
    int n,i,j,k=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    i=0;
    j=1;
    printf("%d\t%d",i,j);
    fab(i,j,n,k);
    getch();
}
