#include <stdio.h>

int main ()
{
    int num;
  
    printf("enter the number\n");
    scanf("%d" ,&num);

    

    if (num<0)
    {
       num=(-1)*num;
    }

    else 
    {
        num=num;
    }

    printf("absolute value of  %d is %d",num);

    return 0;
}
    