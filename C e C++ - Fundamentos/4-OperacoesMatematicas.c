#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d",a , b, a + b);

    //Subtração
    printf("\n A subtracao de %d e %d = %d",a , b, a - b);

    //Divisão
    printf("\n A divisao de %d e %d = %d",a , b, a / b);

    //Multiplicação
    printf("\n A multiplicacao de %d e %d = %d",a , b, a * b);

    //Resto da Divisão
    printf("\n O resto da divisao entre %d e %d = %d",a , b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pausa o programa após executar
    system("pause");

}
