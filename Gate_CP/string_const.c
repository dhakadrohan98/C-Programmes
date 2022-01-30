#include<string.h>
void main()
{
    char *p= "abcdef";
    int i;

    printf("%d\n",p);
    strcpy(p,"xyz");

    printf("%s",p);

}
