#include<stdio.h>
main()
{
    int n,i,sum=1;
    printf("Enter the value n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum = sum+1;
    printf("The result is :%d",sum);
}
