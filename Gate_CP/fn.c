/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void selection(int age, float ht)
{
    if(age>20)
    {
      printf("Age = %d\n",age);
      return;
    }

    if(ht<5)
    {
      printf("Ht = %f\n",ht);
      return;
    }
    printf("Selected\n");
}

int main()
{
    int age;
    float ht;
    printf("Enter age & height: ");
    scanf("%d %f",&age,&ht);
    selection(age,ht);
    return 0;
}
