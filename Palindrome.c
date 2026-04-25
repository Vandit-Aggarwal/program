#include <stdio.h>
int main(int argc, char const *argv[])
{
    int original, number, reverse=0, r;

    printf("enter a number\n");
    scanf("%d", &number);

    original = number;

    for (; number != 0; number /= 10)
    {
        r = number % 10;
        reverse= r + (reverse*10);
        
    }
   
    if (original==reverse)
    {
        printf("your number is palindrome\n");
    }
    else
    {
        printf("your number is not a palindrome\n");  
    }

    return 0;
}
