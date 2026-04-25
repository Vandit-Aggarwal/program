#include <stdio.h>
int main()
{
    int arr1[1][3]={1,4,0},arr2[3][1]={{2},{-1},{5}},answer;
    int i,j;

    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            answer = arr1[i][j] * arr2[i][j];
        printf("%d\n",answer);
        }
        printf("\n");
    }
    return 0;
}
