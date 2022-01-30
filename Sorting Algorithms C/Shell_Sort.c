#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,a[100];
    print("Enter Size of Array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    ShellSort(a,n);

}

int ShellSort(int a[],int n)
{
    int gap,i,j,temp;
    for(gap=n/2; gap>=1; gap/=2)
    {
        for(j=gap; j<n; j++)
        {
            for(i=j-gap; i>=0; i-=gap)
            {
                if(a[i+gap]>a[i])
                    break;
                else
                {
                    temp= a[i+gap];
                    a[i+gap]=a[i];
                    a[i]=temp;
                }
            }
        }
        print("Sorted order: ");
        for(i=0; i<n; i++)
            print("%d ",a[i]);

    }
}

