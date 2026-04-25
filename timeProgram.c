#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define Size 50
int main(int argc, char const *argv[])
{
    time_t t;
    struct tm *tmp;
    char MY_TIME[Size];
    time(&t);

    tmp = localtime( &t );

    strftime(MY_TIME, sizeof(MY_TIME), "%x - %I %M %p", tmp);

    printf("the current date and time is %s", MY_TIME);
    return 0;
}
