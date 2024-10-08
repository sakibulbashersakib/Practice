#include <stdio.h>
void sum(int n){
     int n, i, sum = 0;
    
    for (i = 1; i <= n; i=i+1) {
        sum=sum +i;
    }
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum = %d", sum);
    return 0;
}
