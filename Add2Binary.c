#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum[20],result,r=0;
    int i=0;
    long a,b;
    

    printf("enter first number\n");
    scanf("%ld",&a);

    printf("enter second number\n");
    scanf("%ld",&b);

    while (a!=0||b!=0)
    {
        sum[i++]=(a%10 + b%10 + r)%2;
        r=(a%10 + b%10 + r)/2;
        a=a/10;
        b=b/10;
    }
    if (r!=0)
    {
        sum[i++]=r;
    }
    --i;
    printf("sum of two binary numbers");
    while (i>=0)
    {
        printf("%d",sum[i--]);
    }
    
    
    
    return 0;
}
