void TOH(int n,char from_rod, char aux_rod, char to_rod)
{
    if(n>=1)
    {
        TOH(n-1,from_rod,to_rod,aux_rod);
        printf("Disk %d move from %c to %c\n",n,from_rod,to_rod);
        TOH(n-1,aux_rod,from_rod,to_rod);
    }

}

main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("\n");
  TOH(n,'A','B','C');
}


