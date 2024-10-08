#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,b;
    double c;
    scanf("%d%d%lf",&a,&b,&c);
    int d,e;
    double f;
    scanf("%d%d%lf",&d,&e,&f);
    double val=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %0.2lf\n",val);
    return 0;
}