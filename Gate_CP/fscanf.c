#include<stdio.h>
#include<conio.h>

struct stduent
{
    char name[20];
    float marks;
}stud;

int main()
{
    FILE *fp;

    if((fp=fopen("test.txt","r"))==NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Name \t MArks\n");

    while(fscanf(fp,"%s %f",stud.name,&stud.marks)!= EOF)
    {
        printf("%s\t%f\n",stud.name,stud.marks);
    }
    fclose(fp);
    return 0;
}
