#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    printf("enter a no");
    scanf("%d",&a);
    if(a%2==0)
    printf("not prime no");
    if(a%3==0)
    printf("\nnot prime no");
    if(a%5==0)
    printf("\nnot prime no");
    if(a%7==0)
    printf("\nnot prime no");
    /*printf("not prime no");
    if(a%3==0)
    printf("\nnot prime no");
    if(a%5==0)
    printf("\nnot prime no");
    if(a%7==0)
    printf("\nnot prime no");*/
    else
    printf("prime no");
    getch();
}

