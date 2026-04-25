#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("enter a number\n");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("your number is even");
    }
    
    else if (num%2==1)
    {
        printf("your number is odd");
    }
    
    return 0;
}
