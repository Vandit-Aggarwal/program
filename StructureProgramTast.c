#include <stdio.h>
#include <stdlib.h>
struct student
{
    char *name;
    int roll_no;
    double mark;
};

struct Gstudent
{
    char name[20];
    int roll_no;
    double mark;
};

void firstcondition(struct student s[])
{

    printf("student name : %s\n", s[0].name);

    printf("student roll no : %d\n", s[0].roll_no);

    printf("student marks : %.2f\n", s[0].mark);
}
void secondcondition(struct Gstudent g[])
{

    printf("student name %s", g[0].name);
    printf("\n");

    printf("student roll no %d", g[0].roll_no);
    printf("\n");

    printf("student marks %.2f", g[0].mark);
}
int main()
{
    int n;
    struct student s[2];
    struct Gstudent g[2];

    s[0].name = "pawan";
    s[0].roll_no = 1;
    s[0].mark = 89.7;

    printf("\n");

    printf("1. view student detail :\n");

    printf("2. add student detail :\n");

    printf("\n");

    printf("press 1 for view detail and press 2 for add detail");
    printf("\n");
    scanf("%d", &n);

    while (getchar() != '\n');

        switch (n)
        {
        case 1:
            firstcondition(s);
            break;

        case 2:
            printf("enter student name\n");
            scanf("%19s", g[0].name);
            printf("\n");

            printf("enter student roll no\n");
            scanf("%d", &g[0].roll_no);
            printf("\n");

            printf("enter student marks\n");
            scanf("%lf", &g[0].mark);
            printf("\n");

            secondcondition(g);
            break;

        default:
            break;
        }
        printf("\n\n");

        switch (0)
        {
        case 0:
            printf("press 0 to clear the screen\n");
            
            getchar(); 
            system("cls");
            printf("perss a + tab to restart the program\n");
            break;
        
        default:
            break;
        }
    return 0;
}
