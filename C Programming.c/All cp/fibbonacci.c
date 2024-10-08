#include<stdio.h>
int main()
{
    int x,y,z,n,i;
    printf("How many terms do you want?");
    scanf("%d",&n);
    x=0;
    y=1;
    printf("fibbonacci numbers are below:\n");
    for(i=0;i<n;i++)
    {
        z=x+y;
        printf("\t%d",x);
        x=y;
        y=z;
    }
}
