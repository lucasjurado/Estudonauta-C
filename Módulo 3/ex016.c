#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float vlr, desc, pg;
    printf("Qual foi o valor total das compras? R$");
    scanf("%f",&vlr);
    printf("---------------------------------------\n");
    printf("Voc� comprou R$%.2f na nossa loja.\n",vlr);
    if (vlr>=500){
        printf("=============== ATEN��O ===============\n");
        desc = (vlr*0.1);
        printf("Por fazer mais de R$500 em compras, voc� vai receber R$%.2f de desconto.\n",desc);
        pg = vlr - desc;
        printf("O valor a ser pago � %.2f!\n",pg);
    }
    printf("Volte sempre!\n");
    printf("---------------------------------------\n");
}
