#include <stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2];

    printf("enter array elements for arr1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++){
        scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("enter array elements for arr2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
        printf("array elements are \n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }
            printf("\n");

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ",arr2[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        
         
            
        
    
    

}