#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
char str[MAX_LIMIT];
int i=12,j=4;
double d=4.0,f=4.0;
char t[]={"Hacker "};
printf("%d\n",i+j);
printf("%0.1lf\n",d+f);
fgets(str, MAX_LIMIT, stdin);
strcat(t,str);
printf("%s",t);

return 0;
}

