#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num1,num2,answer;

    printf("enter first number\n");
    scanf("%f",&num1);

    printf("enter second number\n");
    scanf("%f",&num2);

    answer=num1*num2;

    printf("the multiply of two number is %f\n",answer);
    return 0;
}
