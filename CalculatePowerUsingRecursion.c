#include <stdio.h>
long power(int x, unsigned n)
{
    long long pow = 1;

    for (int i = 0; i < n; i++)
    {
        pow = pow * x;
    }
    return pow;
}
int main()
{
    int x;
    unsigned n=3;

    printf("enter a number\n");
    scanf("%d",&x);
    
    int result=power(x,n);
    printf("%d",result);

}