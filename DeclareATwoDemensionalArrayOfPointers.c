#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[2][2]={{1,2},{3,4}};
    int* arr2[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr2[i][j]=&arr[i][j];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *arr2[i][j]);
        }
    }
    
    

    
    
    return 0;
}
