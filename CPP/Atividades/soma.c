#include <stdio.h>

int main(){

    int soma = 0;
    int numero;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero);

    while(numero != 0){
        soma = numero + soma;
        printf("Digite outro numero");
        scanf("%d", &numero);
        
        
    }

    printf("%d", soma);
}