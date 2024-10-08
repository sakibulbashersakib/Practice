#include<stdio.h>
main()
{
    int n;
    printf("Enter year = ");
    scanf("%d",&n);
    if(n%4==0)
        printf("This is leap year");
    else
        printf("This is not leap year");
}
