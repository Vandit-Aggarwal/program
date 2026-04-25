#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll_number;
    char name[20];
    int age;
    float total_marks;

};
int main(int argc, char const *argv[])
{
    struct student students[20];
    int i;

    printf("enter students record\n\n");

    for ( i = 0; i < 5; i++)
    {
        printf("student name  ");
        scanf("%s", students[i].name);

        printf("student roll no:  ");
        scanf("%d",&students[i].roll_number);

        printf("student age  ");
        scanf("%d",&students[i].age);

        printf("student marks  ");
        scanf("%f",&students[i].total_marks);
    }

    printf("here is the result\n\n");

    for ( i = 0; i < 5; i++)
    {
        printf("student name  %s\n",students[i]);

        printf("student roll_no  %d\n",students[i]);

        printf("student age  %d\n",students[i]);

        printf("student marks  %.2f\n",students[i]);

    }
    
    
    return 0;
}
