#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Quantos anos voc� tem? ");
    scanf("%i",&idade);
    printf("Qual � o seu peso(Kg)? ");
    scanf("%f",&peso);
    printf("------<<<PROCESSANDO>>>------\n");
    printf("Muito prazer, %s. Voc� tem %i anos e pesa %.2fKg, correto?\nFIM",nome,idade,peso);
}
