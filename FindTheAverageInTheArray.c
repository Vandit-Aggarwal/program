#include <stdio.h>
int main(int argc, char const *argv[])
{
  int length, sum = 0, array[] = {3, 22, 34, 444, 55};
  float average;

  length = sizeof array / sizeof array[0];
  for (int i = 0; i < length; i++)
  {
    sum = sum + array[i];
  }
  average = sum / length;
  printf("the average is %.2f\n", average);

  return 0;
}
