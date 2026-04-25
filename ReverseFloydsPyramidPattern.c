#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size,num;

    printf("enter the size of loop\n");
    scanf("%d",&size);

    printf("enter the reverse pattern starts number\n");
    scanf("%d",&num);

    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j > i; j--)
        {
            printf(" %d ",num);
            num--;
        }
        printf("\n");
    }
    
    return 0;
}