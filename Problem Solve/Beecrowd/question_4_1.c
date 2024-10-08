#include<stdio.h>
int fun()
{
     int a,b;
    scanf("%d%d",&a,&b);
    int m=a-b;
    return m;
}
int main()
{
   int mi=fun();
    printf("%d",mi);
    return 0;
}
