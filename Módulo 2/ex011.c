#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Digite um número qualquer: ");
    scanf("%i",&num);
    printf("O número %i que você digitou é %s.",num,(num%2==0)?"PAR":"IMPAR");

}
