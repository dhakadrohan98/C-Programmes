main()
{
    int i;
    float tp,tx,tip_percent=20,tax_percent=8,t,w;
    double meal_cost=12.00;
    //i=meal_cost;
    tp=(tip_percent/100)*meal_cost;
    tx=(tax_percent/100)*meal_cost;
    //printf("%f\t%f",tp,tx);
    printf("%0.2f\t%0.2f\n",tp,tx);
    printf("%0.2f\n",tp+tx);
    w=meal_cost+tp+tx;
    printf("w=%f\n",w);
    i=w;
    printf("%d",i);

}
