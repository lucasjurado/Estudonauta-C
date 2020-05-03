#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n1, n2;
    printf("Me diga dois números e colocarei em ordem cresc.");
    printf("\nDigite o primeiro número: ");
    scanf("%i",&n1);
    printf("Digite o segundo número: ");
    scanf("%i",&n2);
    if (n1<n2) printf("Ordem: %i e %i.",n1,n2);
    else if (n1>n2) printf("Ordem: %i e %i.",n2,n1);
    else if (n1==n2) printf("Os valores são iguais!");
}
