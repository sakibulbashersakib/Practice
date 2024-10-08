#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int s=sum(10,20);
    printf("%d",s);
    return 0;
}