#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int number=0,og,num,num2=0,num1=0,cpr;

    og=num;

    printf("enter a number\n");
    scanf("%d",&num);

    number=num*num;
    number=num*num;
    num2=number%10;

    cpr=num1+num2;

    if (og==cpr)
    {
        printf("your number is a neon number");
    }

    else
    {
        printf("your number is not a neon number");
    }
    


    return 0;
}
