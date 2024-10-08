#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m1,m2,d,tw,nd;
    scanf("%d %d %d",&m1,&m2,&d);
    tw= m1*d;
    nd=tw/m2;
    printf("%d",nd);
    return 0;
}
