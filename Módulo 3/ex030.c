#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float preco;
    int opc;
    printf("Digite o preço de um produto R$");
    scanf("%f",&preco);
    printf("\n\t       ESCOLHA UM PERÍODO");
    printf("\n\t================================");
    printf("\n\t1 \tCarnaval [+10%%]");
    printf("\n\t2 \tFérias escolares [+20%%]");
    printf("\n\t3 \tDia das crianças [+5%%]");
    printf("\n\t4 \tBlack Friday [-30%%]");
    printf("\n\t5 \tNatal [-5%%]");
    printf("\n\t================================");
    printf("\nDigite sua opção: ");
    scanf("%i",&opc);
    printf("\n----------------------------------------------\n");
    switch(opc){
    case 1: printf("No CARNAVAL, preço = R$%.2f.",preco*1.1); break;
    case 2: printf("Nas FÉRIAS ESCOLARES, preço = R$%.2f.",preco*1.2); break;
    case 3: printf("No DIA DAS CRIANÇAS, preço = R$%.2f.",preco*1.05);break;
    case 4: printf("Na BLACK FRIDAY, preço = R$%.2f.",preco*0.7); break;
    case 5: printf("No NATAL, preço = R$%.2f.",preco*0.95); break;
    default: printf("Em epócas assim, mantenha o preço em R$%.2f",preco); break;
    }
    printf("\n----------------------------------------------");
    printf("\nFim do programa!");
}
