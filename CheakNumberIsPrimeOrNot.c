#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, count = 0, i;

    printf("enter the number\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("your number is a prime number");
    }

    else
    {
        printf("your number is not a prime number");
    }
    return 0;
}
