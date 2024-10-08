#include <stdio.h>
int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char p[10000];
    double a,b;
    scanf("%s%lf%lf",p,&a,&b);
    double sal=a+(b*0.15);
    printf("TOTAL = R$ %0.2lf\n",sal);
    return 0;
}