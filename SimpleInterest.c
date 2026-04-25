#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int p, r, t, a, SI;
    double base, exp;

    printf("enter the amount\n");
    scanf("%d", &p);

    printf("enter the rate\n");
    scanf("%d", &r);

    printf("enter the time\n");
    scanf("%d", &t);

    a = (p * r * t) / 100;
    
    SI = a - p;

    printf("the SInteerest is %d\n", SI);
    return 0;
}
