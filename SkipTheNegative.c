#include <stdio.h>
int main()
{
    int i, array[] = {1, 3, 5, -1, 2, -5, 0, 9};
    int length = sizeof array / sizeof array[0];

    for (int i = 0; i < length; i++)
    {
        if (array[i] < 0)
        {
            continue;
        }
        if (array[i] == 0)
        {
            break;
        }

        printf("the numbers are %d\n", array[i]);
    }
    return 0;
}