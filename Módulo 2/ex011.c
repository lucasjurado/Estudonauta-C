#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Digite um n�mero qualquer: ");
    scanf("%i",&num);
    printf("O n�mero %i que voc� digitou � %s.",num,(num%2==0)?"PAR":"IMPAR");

}
