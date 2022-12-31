#include <stdio.h>
#include <math.h>


int main ()
{
    int x1,y1,r,x2,y2;

    double ab;

    printf("enter the coordinates of centre\n");
    scanf("%d",&y1 , &x1);
    

    printf("enter the coordinates of point\n");
    scanf("%d", &x2 ,&y2);

     printf("enter the value of radius\n" );
    scanf("%d",&r);

    ab=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    if (ab<r)
    {
        printf("the point lies inside the circle");
    }


     else if (ab=r)
     {
        printf("point lies on the circle");
     }
     
     else 
     {
        printf("point lies outside the circle");
     }

     return 0;
    
}