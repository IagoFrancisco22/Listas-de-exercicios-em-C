#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n11. Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.\n");

    int a,i,soma=0;
    printf("\nDigite um numero:");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
            soma=soma+i;
        }
    printf("\nA soma dos n numeros naturais é: %d",soma);
    }


