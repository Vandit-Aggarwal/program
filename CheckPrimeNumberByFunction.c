#include <stdio.h>
int domain(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;

    printf("enter the number\n");
    scanf("%d", &num);

    if (domain(num))
    {
        printf("prime number\n");
    }
    else
    {
        printf("not prime number\n");
    }

    return 0;
}
