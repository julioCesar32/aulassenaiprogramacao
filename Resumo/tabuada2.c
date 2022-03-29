 #include <stdio.h>
 
 int main(){
    printf("********************************************\n");
    printf("Escola Senai 'Euclides Facchini' Votuporanga\n");
    printf("********************************************\n");
    printf("Nome do aluno: Julio Cesar da Silva Dias    \n");
    printf("********************************************\n");
    
    int tabuada;

    printf("Qual a tabuada você deseja consultar?\n");
    scanf(" %d", &tabuada);
    
    for(int i = 0; i <= 10; i++){
        int calculo = tabuada * i;

        printf("%d X %d = %d\n", tabuada, i, calculo);
        
    }

}