#include <stdio.h>
#include <string.h>

int main()
{
    char st[100], rev[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);
    len = strlen(st);
    if (len > 0 && st[len - 1] == '\n')
        st[len - 1] = '\0';

    len = strlen(st);
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = st[j];
    }
    rev[i] = '\0';

    if (strcmp(st, rev) == 0)
        printf("%s is a palindrome string.\n", st);
    else
        printf("%s is not a palindrome string.\n", st);

    return 0;
}
