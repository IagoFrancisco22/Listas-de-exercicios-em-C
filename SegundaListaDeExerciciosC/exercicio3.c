#include<stdio.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    printf("\n3. Fa�a uma fun��o que receba, por par�metro, um valor inteiro e positivo e retorna o n�mero de divisores desse valor.");
    int a;
    printf("\nDigite um numero: ");
    scanf("%d",&a);
    printf("\n%d",divisor(a));

}

int divisor(int x){
    int i,s=0;
    for (i=1;i<=x;i++){
        if (x%i==0){
            printf(" %d",i);
            s++;
        }
    }
    return(s);

}












