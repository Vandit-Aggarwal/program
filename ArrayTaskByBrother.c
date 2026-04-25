#include <stdio.h>
#include <stdlib.h>
void averageNum(int arr[10])
{
    int s = 0;
    float average = 0;
    for (int j = 0; j < 10; j++)
    {
        s = s + arr[j];
    }
    average = (float)s / 10;
    printf("average of all numbers is %.2f", average);
}
void largestNum(int arr[10])
{

    int largest = arr[0];
    for (int k = 1; k < 10; k++)
    {
        if (arr[k] > largest)
        {
            largest = arr[k];
        }
    }
    printf("the largest number is %d", largest);
}
void lowestNum(int arr[10])
{

    int lowest = arr[0];
    for (int k = 1; k < 10; k++)
    {
        if (arr[k] < lowest)
        {
            lowest = arr[k];
        }
    }
    printf("the lowest number is %d", lowest);
}

void AllOddNum(int arr[10])
{
    printf("all odd numbers are\n");
    for (int l = 0; l < 10; l++)
    {
        if (arr[l] % 2 == 1)
        {
            printf("%d\n", arr[l]);
        }
    }
}
void AllEvenNum(int arr[10])
{
    printf("all even numbers are\n");
    for (int l = 0; l < 10; l++)
    {
        if (arr[l] % 2 == 0)
        {
            printf("%d\n", arr[l]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[10];
    int n, c;

    printf("enter 10 array numbers\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Select your choice\n");
    printf("\n");
    printf("1. average of all\n");
    printf("2. highest number\n");
    printf("3. lowest number\n");
    printf("4. all odd numbers\n");
    printf("5. all even numbers\n");

    printf("\n");

    // printf("press 1 for option 1\n");
    // printf("press 2 for option 2\n");
    // printf("press 3 for option 3\n");
    // printf("press 4 for option 4\n");
    // printf("press 5 for option 5\n");

    scanf("%d", &n);
    switch (n)
    {
    case 1:
        averageNum(arr);
        break;

    case 2:
        largestNum(arr);
        break;

    case 3:
        lowestNum(arr);
        break;

    case 4:
        AllOddNum(arr);
        break;

    case 5:
        AllEvenNum(arr);
        break;

    default:
        break;
    }
    printf("\n\n");

    printf("\npress 0 to clear the terminal\n");
    scanf("%d", &c);

    if (c == 0)
    {
        system("cls");
    }

    return 0;
}
