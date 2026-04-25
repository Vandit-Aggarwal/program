#include <stdio.h>
#include <string.h>

void domain(char *start, char *end)
{
    if (start < end)  
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        domain(start + 1, end - 1); 
    }
}

void doom(char *str)
{
    domain(str, str + strlen(str) - 1);
}

int main()
{
    char str[] = "namans";
    doom(str);
    printf("The reverse of string is %s\n", str);
    return 0;
}