#include <stdio.h>
int main(int argc, char const *argv[])
{
     int a,b;
    printf("enter the first value\n");
    scanf("%d",&a);

    printf("enter the second value\n");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("the value of a is %d and the value of b is %d\n",a,b);
    return 0;
}
