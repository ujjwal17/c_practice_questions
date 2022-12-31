#include <stdio.h>

int main ()
{
    int a,b,c ;

    printf("enter the first angle\n");
    scanf("%d", &a);

    printf("enter the second angle\n ");
    scanf("%d", &b);

    printf("enter the third angle \n");
    scanf("%d",&c);

    if (a+b+c==180)
    {
        printf("a triangle is valid");
    }

    else
    {
        printf("a triangle is not valid");
    }

    return 0;
}
    