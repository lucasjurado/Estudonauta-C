#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float vlr, desc, pg;
    printf("Qual foi o valor total das compras? R$");
    scanf("%f",&vlr);
    printf("---------------------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n",vlr);
    if (vlr>=500){
        printf("=============== ATENÇÃO ===============\n");
        desc = (vlr*0.1);
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n",desc);
        pg = vlr - desc;
        printf("O valor a ser pago é %.2f!\n",pg);
    }
    printf("Volte sempre!\n");
    printf("---------------------------------------\n");
}
