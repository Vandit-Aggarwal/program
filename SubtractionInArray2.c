#include <stdio.h>
int main()
{
    int arr1[3][3], arr2[3][3], answer;
    int i, j, k, l, n, m;
    printf("enter array elements for arr1\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("enter array elements for arr2\n");
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            scanf("%d", &arr2[k][l]);
        }
        printf("\n");
    }
    printf("\n");

    printf("arr1 array elements are\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("arr2 array elements are\n");
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%d ", arr2[k][l]);
        }
        printf("\n");
    }
    printf("\n");

    printf("subtraction of two array is\n");

    for (int n = 0; n < 3; n++)
    {
        for (int m = 0; m < 3; m++ )
        {
            answer = arr2 [n][m] - arr1 [n][m];
            printf("%d ",answer);
        }
        printf("\n");
    }
}
