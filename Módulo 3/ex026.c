#include<stdio.h>
#include<locale.h>
#include<string.h>

void main(){
    setlocale(0,"Portuguese");
    char sigla[3];
    printf("Em que estado do Brasil você nasceu? ");
    fflush(stdin);
    gets(sigla);
    strupr(sigla);
    if (strcmp(sigla,"RS")==0) printf("Nascendo no %s você é GAÚCHO.",sigla);
    else if (strcmp(sigla,"SC")==0) printf("Nascendo no %s você é CATARINENSE.",sigla);
    else if (strcmp(sigla,"PR")==0) printf("Nascendo no %s você é PARANAENSE.",sigla);
    else if (strcmp(sigla,"SP")==0) printf("Nascendo em %s você é PAULISTA.",sigla);
    else if (strcmp(sigla,"MG")==0) printf("Nascendo em %s você é MINEIRO.",sigla);
    else if (strcmp(sigla,"RJ")==0) printf("Nascendo no %s você é CARIOCA.",sigla);
    else printf("Nascendo no %s você é natural da sua cidade, mas não sei como chamar.",sigla);
}
