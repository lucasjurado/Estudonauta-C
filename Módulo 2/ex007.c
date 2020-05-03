#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n, d;
    float t;
    printf("Digite um número: ");
    scanf("%i",&n);
    d = n*2;
    t = (float)n/3;
    printf("Analisando o número %i, seu dobro é %i e sua terça parte é %.2f.",n,d,t);

}
