#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n, d;
    float t;
    printf("Digite um n�mero: ");
    scanf("%i",&n);
    d = n*2;
    t = (float)n/3;
    printf("Analisando o n�mero %i, seu dobro � %i e sua ter�a parte � %.2f.",n,d,t);

}
