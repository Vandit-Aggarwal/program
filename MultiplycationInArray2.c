#include <stdio.h>
int main()
{
    int arr1[3][2]={{4,8},{0,2},{1,6}},arr2[2][2]={{5,2},{9,4}};
    int i,j,answer;
    

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            answer = arr1[i][j] * arr2[i][j];
            printf("%d ",answer);    
        }
        printf("\n");
    }
    
    return 0;
}
