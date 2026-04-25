#include <stdio.h>
int main()
{
  
  int c,a = 10;
  printf("enter the number for which you want table\n");
  scanf("%d",&c);

  printf("your number is %d and the table of %d is\n",c,c);

  do{
  
    int b,i=1;

    b = c*i;
    printf("%d*%d=%d\n",c,i,c*i);
    i=i+1;
  }while(i<=a);

  


  
}