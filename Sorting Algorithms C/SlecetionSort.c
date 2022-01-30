#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],k,j,i,n,min,loc,swap;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(k=0; k<n-1; k++)
    {
        min=a[k];
        loc=k;
        for(j=k+1; j<n; j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        swap=a[k];
        a[k]=a[loc];
        a[loc]=swap;
    }
    printf("Sorting: ");
    for(i=0; i<n; i++)
        printf("\n%d",a[i]);
    getch();
}
