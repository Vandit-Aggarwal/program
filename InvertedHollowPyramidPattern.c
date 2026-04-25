#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;

    printf("enter the size of loop\n");
    scanf("%d", &size);
    
    
    for (int i = 1; i <= size; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        
           

        for (int j = 0; j < size - i; j++)
        {
            if (j == 0 || j == size - i - 1 || i == 0)
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