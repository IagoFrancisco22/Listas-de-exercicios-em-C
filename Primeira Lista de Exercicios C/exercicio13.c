#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n13. Dados um inteiro x e um inteiro não-negativo n, calcular x elevado a n.\n");

    int base,expoente,acumulador=1,i=0;
    printf("\nBase:");
    scanf("%d",&base);
    printf("\nExpoente:");
    scanf("%d",&expoente);

    while(i<expoente){
            acumulador=acumulador*base;
            i++;
        }
    printf("\n %d elevado a %d = %d ",base,expoente,acumulador);

    }
