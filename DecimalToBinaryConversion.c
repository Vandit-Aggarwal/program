#include <stdio.h>

void dectobinary(int num)
{
    int numdec[100];
    int i = 0;
    while (num > 0)
    {
        numdec[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", numdec[j]);
    }
}

int main()
{
    int num;

    printf("enter decemal numbers\n");
    scanf("%d", &num);

    dectobinary(num);

    return 0;
}