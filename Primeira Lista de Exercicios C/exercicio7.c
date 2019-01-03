#include <stdio.h>

main(){
printf("\n7. Calcular o fatorial de um número fornecido pelo usuário. A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.");
int a,fat=1,i;
printf("\n Digite um numero:");
scanf("%d",&a);
if (a==0){
    printf("O fatorial de 0 eh: 1");
}
else{
    for(i=a; i>0;i--){
        fat=fat*i;
    }
}
printf("O fatorial de %d eh: %d",a,fat);
}
