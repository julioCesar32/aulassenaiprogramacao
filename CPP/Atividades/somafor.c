#include <stdio.h>

int main(){

    int soma = 0;
    int numero;
    int quantidade;
    int i = 1;

    printf("Quantos numeros serão somados? ");
    scanf("%d", &quantidade);

    /*for(int i = 1; i <= quantidade; i++){
        printf("Digite outro numero: ");
        scanf("%d", &numero);
        soma = numero + soma;
        
        
    }*/

    while(i <= quantidade){
        printf("Digite outro numero: ");
        scanf("%d", &numero);
        soma = numero + soma;
        i++;
    }

    printf("SOMA = %d", soma);
}