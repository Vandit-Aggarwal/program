#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y,r, arm = 0;
    printf("all armstrong number are:");

    for (x = 1; x <= 1000; x++)
    {
        arm = 0;
        y = x;
        for (; x != 0; x /= 10)
        {
            r=y%10;
            arm = arm * (r*r*r);
            x = x % 10;
            if (arm==x)
        {
            printf(" %d",x);
        }
        }
        
        
    }

    
    

    return 0;
}
