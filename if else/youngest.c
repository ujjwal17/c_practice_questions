#include <stdio.h>

int main ()
{
int ram,shyam,ajay;

printf("enter the age of ram\n");
scanf("%d" ,&ram);

printf("enter the age of shyam\n");
scanf("%d" ,&shyam);

printf("enter the age of ajay\n");
scanf("%d" ,&ajay);

if (ram<=shyam)
    {
        if(ram<=ajay)
        {
            printf("Ram is the Youngest");
        }
        else
        {
            printf("Ajay is the Youngest");
        }
    }
    else if(shyam<=ajay)
    {
        printf("Shyam is the Youngest");
    }
    else
    {
        printf("Ajay is the Youngest");
    }
    return 0;
}
