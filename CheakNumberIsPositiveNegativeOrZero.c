#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("enter the number\n");
    scanf("%d",&num);
    
    if (num>0)
    {
        printf("your number is positive");
    }
    
    else if (num<0)
    {
        printf("your number is negative");
    }
    
    else if (num==0)
    {
        printf("your number is zero");
    }
    
    return 0;
}
