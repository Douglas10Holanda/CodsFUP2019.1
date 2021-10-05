#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função principal do programa
int main(){

    //Definindo uma String
    string palavra;

    //Imrpimindo na tela
    cout << "Digite uma palavra";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variável
    cout << "\nA palavra eh:" << palavra;

    //Pausa o programa após executar
    system("pause");

    return 0;

}

