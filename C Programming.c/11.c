#include <stdio.h>
int main()
{
    double num1, num2, sum;
    printf("Enter the first number:");
    scanf("%lf", &num1);
    printf("Enter another number:");
    scanf("%lf", &num2);
    sum = num1+ num2;
    printf("num1+num2= %lf\n", sum);
    sum=num1-num2;
    printf("num1-num2= %lf\n",sum);
    sum=num1*num2;
    printf("num1*num2= %lf\n",sum);
    sum=num1/num2;
    printf("num1/num2= %lf\n", sum);
    return 0;
}
