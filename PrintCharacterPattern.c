#include <stdio.h>
int main(int argc, char const *argv[])
{
    int size;

    printf("enter the size of loop\n");
    scanf(" %d",&size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
             printf("%c",'a'+j-1);
        }
        printf("\n");
        
    }
    
    return 0;
}
