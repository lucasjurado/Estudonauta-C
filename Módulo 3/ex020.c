#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    float dist, vlr;
    printf("======== TABELA DE PREÇOS ========\n");
    printf("Viagens até 200Km \tR$0,50/Km\n");
    printf("A partir de 200Km \tR$0,35/Km\n");
    printf("----------------------------------\n");
    printf("Distância total da viagem (Km): ");
    scanf("%f",&dist);
    if (dist<=200){
        vlr = dist * 0.50;
        printf("Uma viagem de %.1f Km vai custar R$0,50/Km.",dist);
    }else{
        vlr = dist * 0.35;
        printf("Uma viagem de %.1f Km vai custar R$0,35/Km.",dist);
    }
    printf("\nValor total: R$%.2f.",vlr);
}
