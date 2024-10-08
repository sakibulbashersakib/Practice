#include <stdio.h>
int main()
{
    int n=5,m,i;
    m=0;
    for(i=1;i<=10;i++)
    {
        m=m+n;
        printf("%d*%d=%d\n",n,i,m);
    }
    return 0;
}
