#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float preco;
    int opc;
    printf("Digite o pre�o de um produto R$");
    scanf("%f",&preco);
    printf("\n\t       ESCOLHA UM PER�ODO");
    printf("\n\t================================");
    printf("\n\t1 \tCarnaval [+10%%]");
    printf("\n\t2 \tF�rias escolares [+20%%]");
    printf("\n\t3 \tDia das crian�as [+5%%]");
    printf("\n\t4 \tBlack Friday [-30%%]");
    printf("\n\t5 \tNatal [-5%%]");
    printf("\n\t================================");
    printf("\nDigite sua op��o: ");
    scanf("%i",&opc);
    printf("\n----------------------------------------------\n");
    switch(opc){
    case 1: printf("No CARNAVAL, pre�o = R$%.2f.",preco*1.1); break;
    case 2: printf("Nas F�RIAS ESCOLARES, pre�o = R$%.2f.",preco*1.2); break;
    case 3: printf("No DIA DAS CRIAN�AS, pre�o = R$%.2f.",preco*1.05);break;
    case 4: printf("Na BLACK FRIDAY, pre�o = R$%.2f.",preco*0.7); break;
    case 5: printf("No NATAL, pre�o = R$%.2f.",preco*0.95); break;
    default: printf("Em ep�cas assim, mantenha o pre�o em R$%.2f",preco); break;
    }
    printf("\n----------------------------------------------");
    printf("\nFim do programa!");
}
