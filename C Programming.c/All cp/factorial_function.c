#include<stdio.h>
void factorial( int num){
    int count, fact=1;
    if(num==0){
        printf("Factorial of 0 is 1\n");
    }
    else{
        for(count=1;count<=num;count++){
            fact=fact*count;
        }
        printf("Factorial of %d is %d",num,fact);
    }
}
int main()
{
    int num;
    printf("Enter the positive number to find factouial\n");
    scanf("%d", &num);
    factorial (num);
    return 0;
}