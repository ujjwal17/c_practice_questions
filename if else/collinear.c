#include <stdio.h>

int main ()
{
    int x,y,p,q,m,n,s1,s2;

    printf("enter the value of (x1,y1)\n");
    scanf("%d",&y , &x);
    

    printf("enter the value of (x2,y2)\n");
    scanf("%d", &p ,&q);

     printf("enter the value of (x3,y3)\n" );
    scanf("%d",&m ,&n);

    s1=(y-q)%(x-p);
    s2=(n-q)%(m-p);

    if (s1==s2)
    {
        printf("all the three points fall on the same line");
    }

    else
    {
        printf("not fall on the same line");
    }
    
    




    return 0;
}