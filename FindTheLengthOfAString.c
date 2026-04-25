#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str[50];
    int length = 0,i=0;

    printf("enter the string\n");
    gets(str);

    while (str[i]!='\0')
    {
        length++;
        i++;
    }

    printf("%d\n", length);
    return 0;
}
