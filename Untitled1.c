#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\n1. Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura.\n");
    int a;
    printf("\nTamanho da lista: ");
    scanf("%d",&a);
    int v[a];
    populavetor(a,v[a]);
    printf("retornou ");
    printf(" %d",v[0]);
}

int populavetor(int a, int v[a]){
    int i;
    for (i=0;i<a;i++){
        printf("\nPosicao %d do vetor: ",i);
        scanf("%d",&v[i]);
    }
    return v;
}



