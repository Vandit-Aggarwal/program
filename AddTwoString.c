#include <stdio.h>
int main()
{
    char a[50], b[50], c[100];
    int i = 0, j = 0;

    printf("enter first string\n");
    scanf(" %s",&a);

    printf("enter second string\n");
    scanf(" %s",&b);

    while (a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }
    while (b[j] != '\0')
    {
        c[i] = b[j];
        i++;
        j++;
    }

    c[i] = '\0';

    printf("\n concatenated string = %s", c);

    return 0;
}
