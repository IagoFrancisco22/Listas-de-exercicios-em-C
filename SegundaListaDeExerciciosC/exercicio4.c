#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n4. Escreva uma função que recebes 3 valores inteiros e positvos X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado.");
    int a,b,c;
    printf("\nDigite um numero: ");
    scanf("%d",&a);
    printf("\nDigite um numero: ");
    scanf("%d",&b);
    printf("\nDigite um numero: ");
    scanf("%d",&c);
    printf("\n%d",triangulo(a,b,c));

}

int triangulo(int x,int y,int z ){
    if(x+y>z && z+x>y && y+z>x){
        if(z==x && z==y){
            printf("\nTriangulo Equilatero");
        }
        else if(z==x || z==y || x==y){
            printf("\nTriangulo Isosceles");
        }
        else{
            printf("\nTriangulo Escaleno");
        }
    }
    else{
        printf("\nNão é um triangulo");
    }

}












