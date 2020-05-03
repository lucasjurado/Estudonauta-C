#include <stdio.h>
#include <locale.h>>

void main(){
    setlocale(0,"Portuguese");
    float num, res;
    printf("Digite um número: ");
    scanf("%f",&num);
    if (num>0){
        res = 1/num;
        printf("O inverso de %.0f é igual a %.4f.",num,res);
    }else{
        res = -1*num;
        printf("O oposto de %.0f é igual a %0.f.",num,res);
    }
}
