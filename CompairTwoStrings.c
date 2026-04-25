#include <stdio.h>
#include <string.h>

int camp(char *s1, char *s2)
{
    while (*s1 && !(s1-s2))
    {
        s1++;
        s2++;
    }
    return *s1-*s2;
}

int main(int argc, char const *argv[])
{
    char s1[]="hello";
    char s2[]="hello";

    if (!camp(s1,s2))
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    
    return 0;
}
