#include <stdio.h>

int main()
{
  int num;

  printf("enter the integer \n",num);
  scanf("%d",& num);

  if (num%2==0)
  {
    printf("it is a even number ");
  }

  else 
  {
    printf("it is a odd number");
  }
  
  return 0;
}