#include <stdio.h>
int main()
{
    int original, number, reminder, arm = 0;

    printf("enter the number\n");
    scanf("%d", &number);

    original = number;

    while (number > 0)
    {
        reminder = number % 10;
        arm = (reminder * reminder * reminder) + arm;
        number = number / 10;
    }
  

    if (arm == original)
    {
        printf("your number is an armstrong number");
    }

    else
    {
        printf("your number is not an armstrong number");
    }

    return 0;
}
