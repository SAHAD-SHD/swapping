#include <stdio.h>
void main()
{
    int x=10;
    int y=5;

    printf("\n value before swapping");
    printf("\n x:%d\n y:%d\n",x,y);

    int temp=x;
    x=y;
    y=temp;

    printf("\n values after swaping");
    printf("\n x:%d\n y:%d\n",x,y);

}