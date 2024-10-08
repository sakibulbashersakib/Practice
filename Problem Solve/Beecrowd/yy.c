#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10;
    int y = 11;
    printf("before swap:%d,%d\n", x,y);
    swap(&x,&y);
    printf("after swap:%d,%d", x,y);
}
