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
        printf("Em que ano voc� nasceu? ");
        scanf("%i",&nsc);
        printf("-------------------------------\n");
        idade = atual - nsc;
        printf("Sua idade atual � %i anos.\n",idade);
        if (idade>=18){
            printf("Voc� j� fez 18 anos. Espero que j� tenha se alistado.");
        }else{
            printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar.");
        }
}
