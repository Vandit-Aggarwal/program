#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;

    printf("enter the size of loop\n");
    scanf("%d",&size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 6; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = size; k >= i; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}