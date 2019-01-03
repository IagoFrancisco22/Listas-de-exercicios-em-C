#include <stdio.h>

main(){
printf("\n8. Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 12.");
int a,i;
printf("\n Digite um numero:");
scanf("%d",&a);
printf("\nTabuada do %d",a);
for(i=1;i<=12;i++){
        printf("\n%d x %d = %d",a,i,a*i);
}

}
