#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int nsc, atual, idade;
    printf("Em que ano voc� nasceu? ");
    scanf("%i",&nsc);
    atual = data ->tm_year + 1900;
    idade = atual - nsc;
    printf("-------------------------------------------------\n");
    printf("Voc� tem %i anos, certo?\n",idade);
    printf("Seja bem vindo(a) ao Banco Ita�!\n");
    if (idade>=65){
        printf("== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL ==\n");
    }
    printf("-------------------------------------------------");
}
