#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    char produto[30];
    float preco, desc, preco_desc;
    printf("Produto: ");
    gets(produto);
    printf("Preço do %s: R$",produto);
    scanf("%f",&preco);
    printf("Desconto(%%): ");
    scanf("%f",&desc);
    preco_desc = preco * (1 - desc/100);
    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f",produto,preco,desc,preco_desc);
}
