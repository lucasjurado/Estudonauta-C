#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Me diga um número e te direi se\nele é POSITIVO, NEGATIVO ou NULO.");
    printf("\nDigite um número: ");
    scanf("%i",&num);
    if (num>0) printf("O valor %i é POSITIVO.",num);
    else if (num<0) printf("O valor %i é NEGATIVO.",num);
    else if (num==0) printf("O valor %i é NULO.",num);
}
