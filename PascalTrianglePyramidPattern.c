#include <stdio.h>

int main()
{
    int size;

    printf("Enter the number of rows: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {

        for (int space = 0; space < size - i - 1; space++)
        {
            printf(" ");
        }

        int value = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}