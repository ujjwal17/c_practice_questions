#include <stdio.h>

int main ()

{
    int l,b,a,p;

    printf("enter length\n");
    scanf("%d",&l);

    printf("enter breadth\n");
    scanf("%d",&
    b);

     a= l*b;
     p=2*(l+b);

     printf("area of rectangle is %d\n" ,a);
     printf("perimeter of ractangle is %d\n" ,p);

     if (a>p)
     {
       printf("area of rectanle is greater than its perimeter");

     }
     
     else
     {
        printf("perimeter bof rectanle is greater than its area");
     }

    return 0;
    
}