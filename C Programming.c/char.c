#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%f",&c);
    scanf("%c",&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%0.2f\n",c);
    printf("%c\n",d);

    return 0;
}
