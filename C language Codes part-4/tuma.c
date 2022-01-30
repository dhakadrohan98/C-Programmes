#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    int i;
    for (i=1;i<=20;i++) {
        gotoxy(30,i);
        printf("hello");

    }
    getch();
}
