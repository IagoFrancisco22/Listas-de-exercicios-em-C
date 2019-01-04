#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n1. Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em caso contrário.\n");
    int a;
    printf("\nDigite um numero: ");
    scanf("%d",&a);

    if (primo(a)==0){
        printf("\nNao eh primo");
    }
    else{
        printf("\n Eh primo");
    }

}

int primo( int x){
    int i;
    for (i=2;i<x;i++){
        if (x%i==0){
            return 0;
        }
    }
    return 1;


}
