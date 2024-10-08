#include <stdio.h>
int main()
{
    int gcd,a,b,x;
    scanf("%d%d",&a,&b);
    if(a<b){
        x=a;
    }
    else{
        x=b;
    }
    for(;x>=1;x--)
    {
        if(a%x==0&&b%x==0){
            break;
        }
    }
    printf("GCD is %d\n",gcd);
    return 0;

}
