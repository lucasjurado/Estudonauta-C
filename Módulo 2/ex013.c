#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(0,"Portuguese");
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%i",&n1);
    printf("Digite o segundo valor: ");
    scanf("%i",&n2);
    printf("----- OPERAÇÕES BITWISE -----");
    printf("\nCalculando %i & %i é igual a %i.",n1,n2,(n1&n2));
    printf("\nCalculando %i | %i é igual a %i.",n1,n2,(n1|n2));
    printf("\nCalculando %i ^ %i é igual a %i.",n1,n2,(n1^n2));


}
