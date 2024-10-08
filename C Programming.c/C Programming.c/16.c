#include <stdio.h>
int main()
{
    int num1,num2,value;
    char s;
    printf("Please enter a number:");
    scanf("%d",&num1);
    printf("Please enter another number:");
    scanf("%d",&num2);
    value=num1+num2;
    s='+';
    printf("%d%c%d=%d\n",num1,s,num2,value);
    value=num1-num2;
    s='-';
    printf("%d%c%d=%d\n",num1,s, num2,value);
    value=num1*num2;
    s='*';
    printf("%d%c%d=%d\n", num1,s, num2,value);
    value=num1/num2;
    s='/';
    printf("%d%c%d=%d\n",num1,s,num2,value);
    return 0;

}
