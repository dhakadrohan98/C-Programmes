#include<math.h>
main()
{
    int a,b,c=0,d=0,b1=0,a1=0;
    float x1=0,x2=0,d1=0;
    printf("enter values of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-(4*a*c);
    //printf("%f\n",d);
    //printf("%f\n",sqrt(d));
    //printf("d = %d\n",d);
    if(d<0)
        printf("roots are imaginary & unequal\n");
    if(d==0)
        printf("roots are equal & real\n");
    if(d>0)
        printf("roots are real & unequal\n");
    d1=sqrt(d);
    b1=-b;
    a1=2*a;
    x1=(b1+d1)/a1;
    x2=(b1-d1)/a1;
    printf("one root = %f & other = %f",x1,x2);
    getch();
}
