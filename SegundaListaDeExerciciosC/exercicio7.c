#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n7. Fa�a 3 fun��es:");
    printf("\nler: - uma fun��o que receba dois n�mero inteiro positivo n;");
    printf("\nmultiplicar: - que multiplique os n�meros recebidos na fun��o ler;");
    printf("\nimprimir: - que imprima o resultado da fun��o multiplicar.");

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

