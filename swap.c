#include <stdio.h>
#define p printf(
#define f )
#define m printf("\n")

void swap(int *x,int *y)
{
     int temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int x=10;
    int y=5;

    p"value before swapping" f;
    p"x:%d\n y:%d",x,y f;
    m;

    swap(&x,&y);

    p"values after swaping\n" f;
    p"x:%d\n y:%d",x,y f;
    m;
}
