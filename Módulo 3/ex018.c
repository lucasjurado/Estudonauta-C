#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
        setlocale(0,"Portuguese");
        time_t t;
        time(&t);
        struct tm * data;
        data = localtime(&t);
        int nsc, atual, idade;
        atual = data -> tm_year + 1900;
        printf("Atualmente estamos no ano de %i.\n",atual);
        printf("Em que ano você nasceu? ");
        scanf("%i",&nsc);
        printf("-------------------------------\n");
        idade = atual - nsc;
        printf("Sua idade atual é %i anos.\n",idade);
        if (idade>=18){
            printf("Você já fez 18 anos. Espero que já tenha se alistado.");
        }else{
            printf("Você ainda não tem 18 anos. Não pode se alistar.");
        }
}
