#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n6. Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula e retorna XZ.");
    int a,b;
    printf("\nBase: ");
    scanf("%d",&a);
    printf("\nExpoente: ");
    scanf("%d",&b);
    printf("\n%d",xp(a,b));

}

int xp(int x,int y){
    if (y==1){
        return x;
    }
    else{
        return x* xp(x,y-1);
    }
    }













