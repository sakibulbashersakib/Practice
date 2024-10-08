#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s;
    float area;
    printf("Enter your three arms length = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
    s = (a+b+c)/2;
    area = (sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("Area of triangle = %f",area);
    }
    else{
        printf("It is invalide");
    } 
    return 0;
}
