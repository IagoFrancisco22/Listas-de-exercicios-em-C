#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n7. Faça 3 funções:");
    printf("\nler: - uma função que receba dois número inteiro positivo n;");
    printf("\nmultiplicar: - que multiplique os números recebidos na função ler;");
    printf("\nimprimir: - que imprima o resultado da função multiplicar.");

    int a,b;
    ler(a,b);

}

int ler(int a,int b){
    printf("\n\nDigite um numero: ");
    scanf("%d",&a);
    printf("\n\nDigite um numero: ");
    scanf("%d",&b);
    mutiplicar(a,b);
    return 1;
    }
int mutiplicar(int a, int b){
    int resultado;
    resultado=a*b;
    imprimir(a,b,resultado);
    return resultado;
}

int imprimir(int a, int b,int r){
    printf("%d x %d = %d",a,b,r);

}

