#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Função principal do programa
void main(){

    //Imprime na tela
    printf("%d", TAM);

    int i;

    //Contagem até 10
    for(i = 1;i <= TAM;i++){
        printf("\n%d", i);
    }

    //Pausa o programa após executar
    system("pause");

}

