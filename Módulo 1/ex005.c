#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    srand(time(NULL));
    int npc = rand()%5+1;
    int nplay;
    printf("Adivinhe o valor gerado entre 1 e 5: ");
    scanf("%i", &nplay);
    printf("Voce digitou o numero %i e o computador %i.",nplay,npc);
}
