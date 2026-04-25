#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter the first value\n");
    scanf("%d",&a);

    printf("enter the second value\n");
    scanf("%d",&b);

    printf("enter the third value\n");
    scanf("%d",&c);
    //this is the main logic in this program
    d=a;
    a=b;
    b=c;

    printf("the value of a is %d\n",b);
    printf("the value of b is %d\n",d);
    printf("the value of c is %d\n",a);
}