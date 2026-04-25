#include <stdio.h>
int main()
{
  
  int c,a = 10;
  printf("enter the number for which you want table\n");
  scanf("%d",&c);
  //printf("value is %d\n",c);

  printf("your number is %d and the table of %d is\n",c,c);

  for (int i = 1; i <= a; i++)
  {
    int b;
    b = c*i;
    printf("%d*%d=%d\n",c,i,c*i);
  }
  


  
}