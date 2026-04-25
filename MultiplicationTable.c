#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,ans;

    printf("enter the table you want to print\n");
    scanf(" %d",&num);

    for (int i = 1; i <= 10; i++)
    {
        ans=num*i;
        printf("%d multiply by %d is %d\n",num,i,ans);
    }
    
    return 0;
}
