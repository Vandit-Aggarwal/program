
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define Size 50
int main()
{
    time_t s;
    struct tm* current_time;
    char MY_TIME[Size];
    s=time(NULL);

    current_time = localtime(&s);

    printf("%d:%d:%d", current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
    return 0;
}