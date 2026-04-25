#include <stdio.h>
int main()
{

    int c, i = 1, a = 10;
    printf("enter the number for which you want table\n");
    scanf("%d", &c);

    printf("your number is %d and the table of %d is\n", c, c);

     while (i <= a);
    {

        int b;

        b = c * i;
        printf("%d*%d=%d\n", c, i, c * i);
        i = i + 1;
    }
}