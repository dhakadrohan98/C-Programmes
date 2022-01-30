#include<stdio.h>

struct stag
{
    char c;
    int i;
    float f;
};

union utag
{
    char c;
    int i;
    float f;
} ;

int main()
{
    union utag uvar;
    struct stag svar;

    printf("Size of svar = %u\n",sizeof(svar));
    printf("Address of svar = %p\n",&svar);
    printf("Address of member: %p %p %p\n",&svar.c,&svar.i,&svar.f);

    printf("Size of uvar = %u\n",sizeof(uvar));
    printf("Address of uvar = %p\n",&uvar);
    printf("Address of member: %p %p %p\n",&uvar.c,&uvar.i,&uvar.f);

}
