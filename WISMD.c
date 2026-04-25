#include <stdio.h>
int main()
{
    int arr1[2][2];

    printf("enter array elements for rows\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++){
        scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}