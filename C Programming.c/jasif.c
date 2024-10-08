#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,s;
    float area;
    printf("Enter your three arms length = ");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = (sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("Area of triangle = %f",area);
}
