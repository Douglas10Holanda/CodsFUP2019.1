#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int a = 18;

    //Conectivo Lógico E (AND) , Se UMA COMPARACAO for FALSA, Não entra no bloco
    if(a > 5 && a > 15){
        printf("\n A variavel 'a' esta entre 5 e 15 ");
    }

    //Conectivo Lógico OU (OR) , Se UMA COMPARACAO for VERDADEIRA, já entra no bloco
    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 ou 15 ");
    }

    //Misturando Conectivos
    if( (a > 5 && a < 15) || a == 20 ){
        printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20 ");
    }

    //Pausa o programa após executar
    system("pause");

}

