#include <stdio.h>

int main ()
{
int cp , sp , p ,l;

printf("cost price\n");
scanf("%d" ,&cp);

printf("selling price\n");
scanf("%d" ,&sp);

if (sp>cp)
{
   p= sp-cp;
    printf("your profit  is %d\n",p);
}

else if (cp>sp)
{
   l=cp-sp;
   printf("your loss is %d\n",l);
}

 

 
 return 0;
}