
#include <stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for(; ;)
    {
        printf("%d*%d=%d\n",n,i,n*i);

        i=i+1;
        if(i>10)
        {
            break;
        }

    }
    return 0;
}
