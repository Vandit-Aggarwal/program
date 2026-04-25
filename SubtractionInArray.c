#include <stdio.h>
int main()
{
    int arrA[3][3] = {{2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    int arrB[3][3] = {{12, 7, 6}, {8, 0, 5}, {3, 2, 4}};
    int answer, i, j, k, l, n;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //printf("%d ", arrA[i][j]);
           // printf("%d ", arrB[i][j]);
             answer = arrB[i][j] - arrA[i][j];
        printf("%d\n",answer);
        }
        printf("\n");
    }

    // for (k = 0; k < 3; k++)
    // {
    //     for (l = 0; l < 3; l++)
    //     {
    //         printf("%d ", arrB[k][l]);
    //     }
    //     printf("\n");
    // }

        //
}