#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n12. Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.\n");

    int a,i=0,soma=1;
    printf("\nDigite um numero:");
    scanf("%d",&a);
    while(i<a){
            if(soma%2==1){
                printf(" %d",soma);
                i++;
            }
            soma++;
        }
    }


