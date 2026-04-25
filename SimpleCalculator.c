#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, ans;
    char op;

    printf("enter first integer\n");
    scanf(" %d", &a);

    printf("enter second integer\n");
    scanf(" %d", &b);

    printf("enter an operator (+,-,*,/):\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        ans = a + b;
        break;

    case '-':
        ans = a - b;
        break;

    case '*':
        ans = a * b;
        break;

    case '/':
        if (b == 0)
        {
            printf("error");
        }

        ans = a / b;
        break;

    default:
        break;
    }

    printf("the answer is %d\n", ans);
    return 0;
}
