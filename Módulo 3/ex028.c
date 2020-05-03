#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float n1,n2,res;
    char op;
    printf("VALOR 1: ");
    scanf("%f",&n1);
    printf("VALOR 2: ");
    scanf("%f",&n2);
    printf("======================\n");
    printf("+ \t Adição\n");
    printf("- \t Subtração\n");
    printf("* \t Multiplicação\n");
    printf("/ \t Divisão\n");
    printf("======================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    op = getchar();
    printf("----------------------\n");
    printf("%.1f %c %.1f = ",n1,op,n2);
    switch(op){
    case '+': printf("%.1f",n1+n2); break;
    case '-': printf("%.1f",n1-n2); break;
    case '*': printf("%.1f",n1*n2); break;
    case '/': printf("%.1f",n1/n2); break;
    default: printf("Erro! Caractere não reconhecido."); break;
    }
    printf("\n----------------------");
    printf("\nFim!");
}
