#include <stdio.h>
int main(int argc, char const *argv[])
{
    long a;
    char abc[30];

    printf("type some words\n");
    scanf("%s",&abc);

    sprintf(a,"C: %s",abc);

    puts(a);
    return 0;
}