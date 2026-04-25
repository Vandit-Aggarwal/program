#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,size,number;

    printf("enter numbers you want to print\n");
    scanf("%d",&number);

    printf("enter the size of pattern\n");
    scanf("%d",&size);

    for ( i = 1; i <= size; i++)
    {
        for ( j = i; j < 5; j++)
        {
            printf(" ");
    
        }
        for ( k = 1; k <= i; k++)
            {
                printf("%d",number);
            }
            printf("\n");
        
    }
    
    

    return 0;
}
