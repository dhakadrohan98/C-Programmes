#include<stdio.h>
struct pair
{
    int value;
    int key;
};
void display (struct pair hash_table[],int size);

void main()
{
    int size,i,temp;
    printf("Enter the size of Table: ");
    scanf("%d",&size);
    struct pair hash_table[size];
    puts("Enter the elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&temp);
        hash_table[temp%size].value = temp;
        hash_table[temp%size].key = temp%size;
    }
    printf("\n");
    display(hash_table,size);
    int a=0;
}

void display(struct pair hash_table[],int size)
{
    int i;
    printf("Value\tKey\n");

    for(i=0; i<size; i++)
        printf("%d\t%d\n",hash_table[i].value,hash_table[i].key);
}
