#include <stdio.h>
int main(int argc, char const *argv[])
{
    long a=357583;
    char abc[30];

    sprintf(abc,"C: %ld",a);

    puts(abc);
    return 0;
}