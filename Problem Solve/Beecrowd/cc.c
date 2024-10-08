#include<stdio.h>
void swap(int x, int y) {
 int t;
 t = x;
 x = y;
 y = t;
} 
int main()
{
 int m = 10, n = 20;
 printf("Before %d ,%d\n", m, n);
 swap(m, n);
 printf("After %d,%d\n", m, n); 
 return 0;
}