#include <stdio.h>
int main(int argc, char const *argv[])
{
    int h,s,m;

    printf("enter hours you want to convert into minutes and seconds\n");
    scanf("%d",&h);

    printf("Minutes = %d Seconds = %d",h*60,h*3600);
    return 0;
}
