#include <stdio.h>

struct inchfeet
{
    int feet;
    float inch;
}d1,d2,result;

int main()
{
    printf("enter the first distance\n");
    printf("enter feet\n");
    scanf("%d",&d1.feet);
    printf("enter inch\n");
    scanf("%f",&d1.inch);

    printf("enter the second distance\n");
    printf("enter feet\n");
    scanf("%d",&d2.feet);
    printf("enter inch\n");
    scanf("%f",&d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    while (result.inch>=12.0)
    {
        result.inch = result.inch - 12.0;
        result.feet++;
    }

    printf("the total distance is %d,%.1f",result.feet,result.inch);
    


    return 0;
}
