#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("\nA letra eh x.");
    }

    //Código em ASCII
    printf("\nCodigo da letra = %d", letra);

    //Comparando Código ASCII
    if(letra == 120){
         printf("\n A letra eh x.");
    }

    //Pausa o programa após executar
    system("pause");

}

