#include<stdio.h>
int fun()
{
    static int x=0;
    printf("%d\n",x);
    x++;

}
void func()
{
    int a=0;
    printf("%d\n",a);
    a++;
}
int main()
{
    int a, b,m,n;
    fun();
    fun();
    fun();
    func();
    func();
    //printf("%d\n",a);
   // printf("%d",b);

    return 0;

}
