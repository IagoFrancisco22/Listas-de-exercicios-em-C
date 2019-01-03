#include <stdio.h>

main(){
printf("\n6. Dados três números, imprimi-los em ordem crescente.");
int a,b,c;
printf("\n Digite um numero:");
scanf("%d",&a);
printf("\n Digite um numero:");
scanf("%d",&b);
printf("\n Digite um numero:");
scanf("%d",&c);
if (a>b&&a>c){
        if(b>c){
            printf("Numeros na ordem crescente: %d %d %d", a,b,c);
        }
        else if (c>b){
            printf("Numeros na ordem crescente: %d %d %d", a,c,b);
        }
}
else if (b>a&&b>c){
    if (a>c){
        printf("Numeros na ordem crescente: %d %d %d", b,a,c);
    }
    else if(c>a){
        printf("Numeros na ordem crescente: %d %d %d", b,c,a);
    }
}
else if (c>b&&c>a){
    if (b>a){
        printf("Numeros na ordem crescente: %d %d %d",c,b,a);
    }
    else if (a>b){
        printf("Numeros na ordem crescente: %d %d %d", c,a,b);
    }
}
else{
    printf("os numeros sao iguais");
}


}

