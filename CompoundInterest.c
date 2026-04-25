#include <stdio.h>
#include <math.h> 
int main(int argc, char const *argv[])
{
    float a,p,r,t,Cinterest;
    double base,exp;

    printf("enter the amount\n");
    scanf("%f",&p);

    printf("enter the rate\n");
    scanf("%f",&r);

    printf("enter the time\n");
    scanf("%f",&t);

    base=p*(1+(r/100));
    exp=t;
    a=pow(base,exp);    
    Cinterest=a-p;   
    printf("the compound interest is %0.2f\n",a);
}
