#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm * data;
    data = localtime(&t);
    int atual, nsc, idade, alist;
    atual = data ->tm_year + 1900;
    printf("Atualmente estamos no ano de %i.",atual);
    printf("\nEm que ano voc� nasceu? ");
    scanf("%i",&nsc);
    printf("--------------------------------------------------------\n");
    idade = atual - nsc;
    alist = nsc + 18;
    printf("Sua idade atual � %i anos.\n",idade);
    if (idade>18) printf("Seu alistamento foi em %i. J� se passaram %i anos.",alist, atual - alist);
    else if (idade<18) printf("Seu alistamento ser� em %i. Ainda faltam %i anos.", alist, alist-atual);
    else if (idade==18) printf("Voc� completa 18 anos exatamente em %i. V� se alistar!",atual);
    printf("\n--------------------------------------------------------\n");
}
