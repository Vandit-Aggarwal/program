#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100];
    int i, c = -1;
    int len;

    printf("enter any numbers\n");
    scanf("%99s", &a);

    len=strlen(a);

    for (i = 0; i < len; i++)
    {
        if (a[i]!= '0')
        {
            c = i;
            break;
        }
    }
    if (c==-1)
    {
        printf("0\n");
    }
    else{
    
    for (i = c; i < len; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    }
    return 0;
}
