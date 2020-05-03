#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    char nome[30];
    float nota1, nota2;
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("O aluno %s tirou notas %.1f e %.1f.\n"
           "Sua média final é de %.1f.",nome,nota1,nota2,(nota1+nota2)/2);
}
