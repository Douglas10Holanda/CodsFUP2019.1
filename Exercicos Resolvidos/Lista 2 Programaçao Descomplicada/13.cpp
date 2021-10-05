/*Escreva o menu de opcoes abaixo, leia a opcao do usuario e execute a operacao esco- ˜
lhida. Escreva uma mensagem de erro se a opcao for invalida. ´
Escolha a opcao:
1- Soma de 2 numeros.
2- Diferenca entre 2 numeros (maior pelo menor).
3- Produto entre 2 numeros.
4- Divisao entre 2 numeros (o denominador nao pode ser zero).*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int opcao,num1,num2,maior;
    

    printf("Menu de opcao: \n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros.\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros.\n");
    printf("Digite sua opcao: \n");
    scanf("%d",&opcao);
    switch (opcao)
    {  
         case 1:
               {  
                  printf("Digite um numero:\n ");
                  scanf("%d",&num1);
                  printf("Digite outro numero:\n ");
                  scanf("%d",&num2);
                  printf("O resultado da soma e : %d\n",(num1+num2));
                  break;
                  }  
         case 2:
               {
                  printf("Digite um numero:\n ");
                  scanf("%d",&num1);
                  printf("Digite outro numero:\n ");
                  scanf("%d",&num2);
                  if(num1>num2)
                  printf("O resultado da diferenca e : %d\n",(num1-num2));
                  else
                  printf("O resultado da diferenca e : %d\n",(num2-num1));
                  break;             
                  }
         case 3:
               {
                  printf("Digite um numero:\n ");
                  scanf("%d",&num1);
                  printf("Digite outro numero:\n ");
                  scanf("%d",&num2);
                  printf("O resultado do produto e : %d\n",(num1*num2));
                  break;             
                  }
         case 4:
               {   
                  printf("Digite o numerador: \n");
                  scanf("%d",&num1);
                  printf("Digite o denominador: \n");
                  scanf("%d",&num2);
                  if(num2>0)
                  printf("O resultado da divisao e : %d\n",(num1/num2));
                  else
                  printf("ERRO: A divisao por zero nao pode ser feita!\n");
                  break;       
                  }      
         default:
                 printf("ERRO A OPCAO DIGITADA NAO E VALIDA!\n");
                 break;
                 }
        system("pause");
        return 0;
        }
