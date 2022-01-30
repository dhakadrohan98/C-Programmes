#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char name[10];
    int id;

    if((fp=fopen("test.txt","w"))==NULL)
    {
        printf("error in opening file\n");
        exit(1);
    }

    printf("Enter your name & id");
    scanf("%s %d",name,&id);

    fprintf(fp,"My name is %s & id is %d",name,id);

    fclose(fp);
    return 0;
}
