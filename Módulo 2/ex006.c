#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n;
    printf("Digite um n�mero: ");
    scanf("%i",&n);
    printf("Analisando o n�mero %i, seu antecessor � %i e seu sucessor � %i.",n,n-1,n+1);
}
