#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n5. Fa�a uma fun��o para calcular o fatorial de um n�mero fornecido pelo usu�rio.");
    int a;
    printf("\nDigite um numero: ");
    scanf("%d",&a);
    printf("\nModo normal: %d",fat(a));
    printf("\nModo recursivo: %d",fatrecursivo(a));

}

int fat(int x){
    int i,f=1;
    for(i=1;i<=x;i++){
        f=f*i;
    }
    return f;
    }
int fatrecursivo(int x){
    if (x==0){
        return 1;
    }
    else{
        return x*fatrecursivo(x-1);
    }

}













