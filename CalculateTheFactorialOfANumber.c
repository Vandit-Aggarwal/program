#include <stdio.h>

int factrec(int num)
{
    if (num <= 1)
        return num;

    return num * factrec(num - 1);
}
int main(int argc, char const *argv[])
{
    int num;

    printf("enter a number\n");
    scanf("%d", &num);

    printf("the factorial of a number is %d\n", factrec(num));
    return 0;
}