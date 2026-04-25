#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r=0,q=0,a,b;

    printf("enter divisor\n");
    scanf("%d",&a);

    printf("enter divident\n");
    scanf("%d",&b);

    q=a/b;
    r=a%b;

    printf("Quotient = %d, Remainder = %d",q,r);
    return 0;
}
