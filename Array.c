#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5],i;

    printf("enter array elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("array elements are %d\n",arr[i]);
    }

   
    
    
    
    return 0;
}
