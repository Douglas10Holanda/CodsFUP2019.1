/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
8%). Faca um programa em que o usuario entre com o valor e o estado destino do ´
produto e o programa retorne o preco final do produto acrescido do imposto do estado
em que ele sera vendido. Se o estado digitado nao for invalido, mostrar uma mensagem ´
de erro.*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int opcao;
    float valor,taxa;
    

    printf("Menu de opcao: \n");
    printf("1- MG.\n");
    printf("2- SP.\n");
    printf("3- RJ.\n");
    printf("4- MS.\n");
    printf("Digite o destino do produto: \n");
    scanf("%d",&opcao);
    switch (opcao)
    {  
         case 1:
               {  
                  printf("Digite o valor do produto:\n ");
                  scanf("%f",&valor);
                  printf("O preco final do produto para esta localidade e: %.2f\n",(valor+(valor*0.07)));
                  break;
                  }  
         case 2:
               {  
                  printf("Digite o valor do produto:\n ");
                  scanf("%f",&valor);
                  printf("O preco final do produto para esta localidade e: %.2f\n",(valor+(valor*0.12)));
                  break;
                  }  
         case 3:
               {  
                  printf("Digite o valor do produto:\n ");
                  scanf("%f",&valor);
                  printf("O preco final do produto para esta localidade e: %.2f\n",(valor+(valor*0.15)));
                  break;
                  }  
         case 4:
               {  
                  printf("Digite o valor do produto:\n ");
                  scanf("%f",&valor);
                  printf("O preco final do produto para esta localidade e: %.2f\n",(valor+(valor*0.08)));
                  break;
                  }  
         
         default:
                 printf("ERRO A OPCAO DIGITADA NAO E VALIDA!\n");
                 break;
                 }
        system("pause");
        return 0;
        }
