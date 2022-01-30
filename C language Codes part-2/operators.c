#include<stdio.h>
#include<conio.h>
void solve(double meal_cost, float tip_percent, float tax_percent)
{
  float tp,tx,t,j;
  int i;
  tp=(tip_percent/100)*meal_cost;
  tx=(tax_percent/100)*meal_cost;
    //m=meal_cost;
    t=meal_cost+tp+tx;
    i=t;
    j=i+0.5;
    if(j<=t)
       i++;
    printf("result=%d",i);
    return 0;
}

main()
{
    double meal_cost;
    int tip_percent,tax_percent;
    scanf("%lf",&meal_cost);
    scanf("%d\n%d",&tip_percent,&tax_percent);
    solve(meal_cost,tip_percent,tax_percent);
    getch();
}
