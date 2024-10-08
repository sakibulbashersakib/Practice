#include <stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the another number");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("%d\n",sum);
    sum=num1-num2;
    printf("%d\n",sum);
    sum=num1*num2;
    printf("%d\n",sum);
    sum=num1/num2;
    printf("%d\n",sum);
    return 0;
}
