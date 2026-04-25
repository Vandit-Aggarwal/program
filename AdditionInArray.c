#include <stdio.h>
int main()
{
    int arr1[3][3] = {{2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    int arr2[3][3] = {{12, 7, 6}, {8, 0, 5}, {3, 2, 4}};
    int answer, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            answer = arr1[i][j] + arr2[i][j];
        printf("%d\n",answer);
        }
    }
   
}
