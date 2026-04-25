#include <stdio.h>
int main(int argc, char const *argv[])
{
    int len = 0;
    char str[]={"vandits"}, temp;

    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("the reverse of string is %s\n", str);

    return 0;
}