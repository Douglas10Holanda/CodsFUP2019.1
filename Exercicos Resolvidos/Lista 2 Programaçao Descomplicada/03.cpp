#include<stdio.h>
#include<stdlib.h>

int ano;
int main(void)
{
      printf("Digite o ano a ser pesquisado:");
      scanf("%d",&ano);
      if(ano%4==0 && ano % 100!=0)
        printf("O ano digitado e bissexto!\n");
        else 
        printf("O ano digitado nao e bissexto!\n");
      system("pause");
      return 0;       
  }
