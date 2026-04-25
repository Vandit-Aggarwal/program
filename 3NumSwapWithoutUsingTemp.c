#include <stdio.h>
int main()
{
     int a,b,c;
    printf("enter the first value\n");
    scanf("%d",&a);

    printf("enter the second value\n");
    scanf("%d",&b);
    
    printf("enter the third value\n");
    scanf("%d",&c);

    a=a+c;
    b=a-c;
    c=c-b;
    a=b+c;


    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    printf("the value of c is %d\n",c);
    return 0;
}