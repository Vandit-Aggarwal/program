#include <stdio.h>
struct student
{
    int id;
    char name[50];
    int struct_size;
    char name_len;
}s1;
int main()
{
    printf("enter student id\n");
    scanf("%d",&s1.id);
    printf("enter student name\n");
    ;scanf("%s", s1.name);

    s1.struct_size=sizeof(struct student);

    printf("student id is %d",s1.id);
    printf("student name %s",s1.name);
    printf("the size of name is %lu bytes",sizeof(s1.name));
    printf("the size of struct student is %lu bytes",sizeof(s1.struct_size));

    return 0;
}
