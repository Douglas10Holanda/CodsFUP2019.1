/*Faca uma funcao para verificar se um determinado numero inteiro e divisivel por 3 ou
5, mas nao simultaneamente pelos dois.*/

#include<stdio.h>
#include<stdlib.h>
   int divisao (int a)
     {
     if(a % 3==0 || a % 5==0)
     printf("O numero digitado e divisivel por 3 ou por 5!\n");
     else
     printf("O numero digitado nao e divisivel nem por 3 e nem por 2!\n");
     return 0;
     }
  


int main (void)
{
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d",&numero);
    divisao(numero);
    system("pause");
    return 0;
}
