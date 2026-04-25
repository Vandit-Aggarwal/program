#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i;

    printf("enter the first number\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        int count = 0;
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                (count++);
            }
            if (count == 2)
        {
            printf(" %d\n", j);
        }
        }
       
    }

    return 0;
}
