#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(0,"Portuguese");
    time_t t;
    time(&t);
    struct tm * data;
    data = localtime(&t);
    int hr_filme, hr_atual;
    float din;
    hr_atual = data->tm_hour;
    printf("==================== CINEMA ====================\n");
    printf("Horário do filme (h): ");
    scanf("%i",&hr_filme);
    printf("Quanto dinheiro você tem? R$");
    scanf("%f",&din);
    printf("------------------------------------------------\n");
    printf("HORÁRIO DO FILME: %ih - PREÇO DO INGRESSO: R$20\n",hr_filme);
    printf("------------------------------------------------\n");
    printf("Agora são %i horas.\n",hr_atual);
    if (hr_filme>=hr_atual && din>=20){
        printf("Você consegue comprar ingresso para o filme!");
    }else{
        printf("NÃO é possível comprar ingresso do filme!");
    }
}
