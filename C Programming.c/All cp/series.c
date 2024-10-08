#include<stdio.h>
main()
{
    int i,n, sum=0;
    printf("Enter the value n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum = sum + i;
    printf("The result is :%d",sum);
}
