#include<stdio.h>
#include<locale.h>
#include<string.h>

void main(){
    setlocale(0,"Portuguese");
    char sigla[3];
    printf("Em que estado do Brasil voc� nasceu? ");
    fflush(stdin);
    gets(sigla);
    strupr(sigla);
    if (strcmp(sigla,"RS")==0) printf("Nascendo no %s voc� � GA�CHO.",sigla);
    else if (strcmp(sigla,"SC")==0) printf("Nascendo no %s voc� � CATARINENSE.",sigla);
    else if (strcmp(sigla,"PR")==0) printf("Nascendo no %s voc� � PARANAENSE.",sigla);
    else if (strcmp(sigla,"SP")==0) printf("Nascendo em %s voc� � PAULISTA.",sigla);
    else if (strcmp(sigla,"MG")==0) printf("Nascendo em %s voc� � MINEIRO.",sigla);
    else if (strcmp(sigla,"RJ")==0) printf("Nascendo no %s voc� � CARIOCA.",sigla);
    else printf("Nascendo no %s voc� � natural da sua cidade, mas n�o sei como chamar.",sigla);
}
