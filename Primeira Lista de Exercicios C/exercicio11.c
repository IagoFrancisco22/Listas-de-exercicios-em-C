#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n11. Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros naturais.\n");

    int a,i,soma=0;
    printf("\nDigite um numero:");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
            soma=soma+i;
        }
    printf("\nA soma dos n numeros naturais �: %d",soma);
    }


