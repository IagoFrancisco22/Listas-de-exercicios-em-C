#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n2. Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.");
    int a;
    printf("\nDigite um numero: ");
    scanf("%d",&a);
    somap(a);

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

int somap(int z){
    int i=1,soma=1;
    while(i<=z){
            if (primo(soma)==1){
                printf(" %d",soma);
                i++;
            }
            soma++;

    }

}










