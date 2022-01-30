main()
{
 char s1[1000],s2[1000];
 int i=0,diff;

 printf("enter 1st string: ");
 gets(s1);

 printf("enter 2nd string: ");
 gets(s2);


 while( (s1[i]==s2[i])&&(s1[i]!='\0')&&(s2[i]!='/0') )
    i++;
 diff=s1[i]-s2[i];
 printf("diff = %d",diff);


 //diff=strcmp(s1,s2);
 //printf("diff = %d",diff);

 getch();
}






