#include <stdio.h>
#include <complex.h>
struct complex
{
    float Complex1;
    float Complex2;
}c1,c2;
void result(int c1, int c2)
{
    int n;
    n=c1+c2;
}
int main(int argc, char const *argv[])
{
    printf("enter first c number\n");
    scanf("%f",&c1);

    printf("enter second c number\n");
    scanf("%f",&c2);

    printf("%.2f",result);
    return 0;
}
