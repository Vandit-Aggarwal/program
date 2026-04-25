#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    char abc[30]="legend";

    sprintf(a,"C: %s",abc);

    puts(a);
    return 0;
}