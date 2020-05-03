#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n,d;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%i",&n);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%i",&d);
    printf("\n----- OPERAÇÕES SHIFT -----");
    printf("\nCalculando %i >> %i é igual a %i.",n,d,(n>>d));
    printf("\nCalculando %i << %i é igual a %i.",n,d,(n<<d));
}
