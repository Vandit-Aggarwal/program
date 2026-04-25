#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s=0,count,i;

    printf("enter the size of loop");
    scanf("%d",&count);

    for ( i = 0; i <= count; i++)
    {
        s=s+i;
    }
        printf("sum of nutural numbers is %d\n",s);
    
    return 0;
}
