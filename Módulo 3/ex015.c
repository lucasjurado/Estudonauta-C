#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float n1,n2,media;
    printf("Digite a sua primeira nota: ");
    scanf("%f",&n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f",&n2);
    media = (n1+n2)/2;
    printf("-------------------------------------\n");
    if (media>=7){
        printf("PARABÉNS! ");
    }
    printf("A sua média final foi %.2f.",media);
    printf("\n-------------------------------------");
}
