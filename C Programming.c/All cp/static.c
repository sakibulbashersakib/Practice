#include<stdio.h>
int fun()
{
    static int x=0;
    x++;
    return 0;
}
int main()
{
    int a,b;
    a=fun();
    b=fun();
    printf("%d",a);
    printf("%d",b);
    return 0;

}