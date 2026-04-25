#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("enter first number\n");
    scanf("%d", &a);

    printf("enter second number\n");
    scanf("%d", &b);

    printf("enter third number\n");
    scanf("%d", &c);

    if (a >= b)
    {
        if (a > c)
        {
            printf("%d is the largest number",a);
        }
        else
        {
            printf("%d is the largest number",c);
        }
        
    }

    else if (b >= a)
    {
        if (b > c)
        {
            printf("%d is the largest number",b);
        }
        else
        {
            printf("%d is the largest number",c);
        }
    }

    

    return 0;
}
