#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"portuguese");
    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");
    char nome1[30], nome2[30], nome3[30];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("NOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);
    printf("------------------------------\n");

    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);
    printf("------------------------------\n");

    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Listagem Completa\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Nome \t\tSexo \tNota\n");
    printf("%s \t%c \t%.2f\n",nome1,sexo1,nota1);
    printf("%s \t%c \t%.2f\n",nome2,sexo2,nota2);
    printf("%s \t%c \t%.2f\n",nome3,sexo3,nota3);
    printf("------------------------------\n");
}
