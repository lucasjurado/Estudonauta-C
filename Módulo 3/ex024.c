#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n1, n2;
    printf("Me diga dois n�meros e colocarei em ordem cresc.");
    printf("\nDigite o primeiro n�mero: ");
    scanf("%i",&n1);
    printf("Digite o segundo n�mero: ");
    scanf("%i",&n2);
    if (n1<n2) printf("Ordem: %i e %i.",n1,n2);
    else if (n1>n2) printf("Ordem: %i e %i.",n2,n1);
    else if (n1==n2) printf("Os valores s�o iguais!");
}
