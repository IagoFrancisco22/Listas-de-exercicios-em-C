#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n9 - Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final deverá ser exibido o resultado da operação.");

    int a,b,opcao;

    do {
        printf("\n\t Operacoes: ");
        printf("\n0 - sair\n1-soma\n2-subtracao\n3-multiplicacao\n4-divisao\n");

        printf("\nEscolha:\n");
        scanf("%d",&opcao);
        switch(opcao){
            case 0:
                printf("\nSaindo . . . \n");
                break;
            case 1:
                printf("\n\t\t Voce escolheu SOMA!!!!!!! ");
                printf("\n Digite o primeiro numero: ");
                scanf("%d",&a);
                printf("\n Digite o segundo numero: ");
                scanf("%d",&b);
                printf("\n%d + %d = %d\n",a,b,a+b);
                break;

            case 2:
                printf("\n\t\t Voce escolheu SUBTRACAO!!!!!!! ");
                printf("\n Digite o primeiro numero: ");
                scanf("%d",&a);
                printf("\n Digite o segundo numero: ");
                scanf("%d",&b);
                printf("\n%d - %d = %d\n",a,b,a-b);
                break;

            case 3:
                printf("\n\t\t Voce escolheu MULTIPLICACAO!!!!!!! ");
                printf("\n Digite o primeiro numero: ");
                scanf("%d",&a);
                printf("\n Digite o segundo numero: ");
                scanf("%d",&b);
                printf("\n%d X %d = %d\n",a,b,a*b);
                break;

            case 4:
                printf("\n\t\t Voce escolheu DIVISAO!!!!!!! ");
                printf("\n Digite o primeiro numero: ");
                scanf("%d",&a);
                printf("\n Digite o segundo numero: ");
                scanf("%d",&b);
                printf("%d : %d = %d",a,b,a/b);
                break;
            default:
                printf("\n ;;;opcao invalida;;;");

        }

    }while(opcao);


}
