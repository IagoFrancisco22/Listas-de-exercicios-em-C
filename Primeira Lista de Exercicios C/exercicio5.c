#include <stdio.h>

main(){
printf("\n5. Dado um numero inteiro positivo n verificar se e par ou impar. Apresente uma mensagem na tela informando o numero e o resultado. OBS:% utilizado para calcular o resto.");
int a;
printf("\n Digite um numero:");
scanf("%d",&a);
if (a%2==0){
    printf("%d eh par",a);
}
else{

    printf("%d eh impar",a);
}

}
