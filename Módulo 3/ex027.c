#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n1, n2, n3, maior, inter, menor;
    printf("Me diga tr�s n�meros e colocarei em ordem.");
    printf("\nDigite o primeiro n�mero: ");
    scanf("%i",&n1);
    printf("Digite o segundo n�mero: ");
    scanf("%i",&n2);
    printf("Digite o terceiro n�mero: ");
    scanf("%i",&n3);
    printf("------------------------------------------\n");
    if (n1>n2 && n1>n3) maior = n1;
    else if (n2>n1 && n2>n3) maior = n2;
    else maior = n3;
    printf("MAIOR: %i",maior);
    if (n1>n2 && n2>n1 || n3>n2 && n2>n1) inter = n2;
    else if (n2>n1 && n1>n3 || n3>n1 && n1>n2) inter = n1;
    else inter = n3;
    printf("\nINTERMEDI�RIO: %i",inter);
    if (n1<n2 && n1<n3) menor = n1;
    else if (n2<n1 && n2<n3) menor = n2;
    else menor = n3;
    printf("\nMENOR: %i",menor);
}
