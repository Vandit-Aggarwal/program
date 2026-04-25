#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r, reverse = 0, num;

    printf("enter a number\n");
    scanf(" %d", &num);

    for (; num != 0; num /= 10)
    {
        r = num % 10;
        reverse = r + (reverse * 10);
    }

    printf("reverse number is %d", reverse);

    return 0;
}
