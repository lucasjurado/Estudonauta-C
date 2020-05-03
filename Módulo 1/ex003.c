#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%i",&idade);
    printf("Qual é o seu peso(Kg)? ");
    scanf("%f",&peso);
    printf("------<<<PROCESSANDO>>>------\n");
    printf("Muito prazer, %s. Você tem %i anos e pesa %.2fKg, correto?\nFIM",nome,idade,peso);
}
