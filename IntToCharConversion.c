#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a=357583;
    char abc[30];

    sprintf(abc,"C: %d",a);

    puts(abc);
    return 0;
}