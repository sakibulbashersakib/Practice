#include<stdio.h>
#include<math.h>
long int factorial(int n);
void main()
{
    int n;
    long int factorial(int n);
    printf("Enter the value n");
    scanf("%d",&n);
    printf("factorial of %d=%d",n,factorial(n));
}
long int factorial(int n)
{
    if(n<=1)
        return(1);
        else return(n*factorial(n-1));
}
