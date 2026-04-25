#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;

    printf("enter the year\n");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf("leap year");
    }

    else
    {
        printf("normal year");
    }
    
    return 0;
}
