#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    int num;
    printf("Me diga um n�mero e te direi se\nele � POSITIVO, NEGATIVO ou NULO.");
    printf("\nDigite um n�mero: ");
    scanf("%i",&num);
    if (num>0) printf("O valor %i � POSITIVO.",num);
    else if (num<0) printf("O valor %i � NEGATIVO.",num);
    else if (num==0) printf("O valor %i � NULO.",num);
}
