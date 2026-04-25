#include <stdio.h>
int main()
{
    float profitPer, sp, cp;

    printf("enter the profitPer\n");
    scanf("%f", &profitPer);

    printf("enter the sp\n");
    scanf("%f", &sp);

    cp=(100/(100+profitPer))*sp ;
    cp = sp - profitPer;
    
    printf("cp amount is %f\n",cp);
    return 0;
}
