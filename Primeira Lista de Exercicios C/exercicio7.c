#include <stdio.h>

main(){
printf("\n7. Calcular o fatorial de um n�mero fornecido pelo usu�rio. A fun��o fatorial de um n�mero natural n � o produto de todos os n primeiros n�meros naturais.Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.");
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
