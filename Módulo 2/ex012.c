#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float n1,n2,media;
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f",&n1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f",&n2);
    media = (n1+n2)/2;
    printf("Com as notas %.1f e %.1f, o aluno tem m�dia %.1f.\n"
           "A sua situa��o � %s.",n1,n2,media,(media>=7)?"APROVADO":"REPROVADO");
}
