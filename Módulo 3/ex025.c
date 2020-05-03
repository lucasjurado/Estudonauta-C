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
    printf("\nEm que ano você nasceu? ");
    scanf("%i",&nsc);
    printf("--------------------------------------------------------\n");
    idade = atual - nsc;
    alist = nsc + 18;
    printf("Sua idade atual é %i anos.\n",idade);
    if (idade>18) printf("Seu alistamento foi em %i. Já se passaram %i anos.",alist, atual - alist);
    else if (idade<18) printf("Seu alistamento será em %i. Ainda faltam %i anos.", alist, alist-atual);
    else if (idade==18) printf("Você completa 18 anos exatamente em %i. Vá se alistar!",atual);
    printf("\n--------------------------------------------------------\n");
}
