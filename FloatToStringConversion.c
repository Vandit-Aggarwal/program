#include <stdio.h>
int main()
{
    float a=54.93;
    char arr[20];

    sprintf(arr,"H: %1.2f",a);
    
    puts(arr);
    return 0;
}
