#include <stdio.h>

int sumrec(int num)
{
    if (num <= 1)
        return num;

    return num + sumrec(num - 1);
}
int main(int argc, char const *argv[])
{
    int num;

    printf("enter a number\n");
    scanf("%d", &num);

    printf("the sum of natural numbers is %d\n", sumrec(num));
    return 0;
}
