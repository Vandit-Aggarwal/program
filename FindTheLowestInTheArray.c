#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, array[] = {6, 3, 4, 2, 7};
    int lowest;

    int length = sizeof array / sizeof array[1];
    lowest = array[0];
    for (int i = 0; i < length; i++)
    {
        if (lowest > array[i])
        {
            lowest = array[i];
        }
    }

    printf("lowest number is %d\n", lowest);

    return 0;
}
