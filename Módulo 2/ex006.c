#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%i",&n);
    printf("Analisando o número %i, seu antecessor é %i e seu sucessor é %i.",n,n-1,n+1);
}
