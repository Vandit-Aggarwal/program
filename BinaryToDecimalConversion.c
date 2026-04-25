#include <stdio.h>
int binarytodec(int n)
{
    int dec = 0;
    int base = 1;

    while (n)
    {
        int lastdegit = n % 10;
        dec += lastdegit * base;
        n = n / 10;
        base = base * 2;
    }

    return dec;
}
int main()
{
    int n;

    printf("enter binary degits\n");
    scanf("%d", &n);

    printf("%d", binarytodec(n));
    return 0;
}
