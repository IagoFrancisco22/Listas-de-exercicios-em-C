#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n10-  Dada uma sequ�ncia de n�meros inteiros n�o-nulos, come�ando por 1,imprimir seus quadrados.\n");

    int a;
    printf("Digite um numero:");
    scanf("%d",&a);
    while (a>0){
            printf("\nO quadrado de %d eh %d\n",a,a*a);
            printf("\nDigite outro numero:");
            scanf("%d",&a);
        }
    }


