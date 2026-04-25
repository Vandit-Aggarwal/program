#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;

    printf("enter the size of loop\n");
    scanf("%d", &size);

    for (int i = 1; i < size; i++)
    {
        for (int k = 6; k > i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == size)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}