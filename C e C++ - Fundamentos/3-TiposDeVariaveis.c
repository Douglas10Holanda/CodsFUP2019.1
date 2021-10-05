#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //Definindo Variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando Valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //Escrevendo na Tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.1f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d\n", d);

    //Lendo Valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%c", &c);
    scanf("%d", &d);

    //Escrevendo na Tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.1f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d\n", d);

    //Pausando
    system("pause");

}
