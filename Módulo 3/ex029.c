#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");
    float peso;
    int opc;
    printf("Seu peso na Terra (Kg) = ");
    scanf("%f",&peso);
    printf("\n  \t ESCOLHA UM PLANETA");
    printf("\n\t====================");
    printf("\n\t1 \tMerc�rio");
    printf("\n\t2 \tV�nus");
    printf("\n\t3 \tMarte");
    printf("\n\t4 \tJ�piter");
    printf("\n\t5 \tSaturno");
    printf("\n\t6 \tUrano");
    printf("\n\t====================");
    printf("\n\tDigite sua op��o: ");
    scanf("%i",&opc);
    printf("-------------------------------------\n");
    switch(opc){
    case 1: printf("Em MERC�RIO, seu peso seria %.2f Kg.",peso*0.37); break;
    case 2: printf("Em V�NUS, seu peso seria %.2f Kg.",peso*0.88); break;
    case 3: printf("Em MARTE, seu peso seria %.2f Kg.",peso*0.38);break;
    case 4: printf("Em J�PITER, seu peso seria %.2f Kg.",peso*2.64); break;
    case 5: printf("Em SATURNO, seu peso seria %.2f Kg.",peso*1.15); break;
    case 6: printf("Em URANO, seu peso seria %.2f Kg.",peso*1.17);break;
    default: printf("Op��o inv�lida!"); break;
    }
    printf("\n-------------------------------------\n");
    printf("Fim do programa.");
}
