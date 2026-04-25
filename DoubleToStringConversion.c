#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a=35.8485;
    char abc[30];

    sprintf(abc,"C: %g",a);

    puts(abc);
    return 0;
}
