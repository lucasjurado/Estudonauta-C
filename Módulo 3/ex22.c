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
    printf("Hor�rio do filme (h): ");
    scanf("%i",&hr_filme);
    printf("Quanto dinheiro voc� tem? R$");
    scanf("%f",&din);
    printf("------------------------------------------------\n");
    printf("HOR�RIO DO FILME: %ih - PRE�O DO INGRESSO: R$20\n",hr_filme);
    printf("------------------------------------------------\n");
    printf("Agora s�o %i horas.\n",hr_atual);
    if (hr_filme>=hr_atual && din>=20){
        printf("Voc� consegue comprar ingresso para o filme!");
    }else{
        printf("N�O � poss�vel comprar ingresso do filme!");
    }
}
