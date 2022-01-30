
struct student{
    char name[20];
}s1;

void main()
{
    //s1.name="Golu";
    scanf("%s",s1.name);
    printf("%s",s1.name);
    printf("\n%d", sizeof(s1));
}
