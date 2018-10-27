#include <stdio.h>

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

    printf("\n value before swapping");
    printf("\n x:%d\n y:%d\n",x,y);

    swap(&x,&y);

    printf("\n values after swaping");
    printf("\n x:%d\n y:%d\n",x,y);

}