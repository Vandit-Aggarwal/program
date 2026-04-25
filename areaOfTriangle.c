#include <stdio.h>
int main()
{
    float a, b, area;
    printf("enter the base of triangle\n");
    scanf("%f", &a);

    printf("enter the height of triangle\n");
    scanf("%f", &b);

    area =0.5 * a * b ;

    printf("the area of triangle is %.2f", area);
    return 0;
}
