#include<stdio.h>
#include<stdlib.h>

int main(void )
{
      int numero[10];
      int i,cont=0;
      
      for(i=0;i<10;i++)
       {
          printf("Digite um valor para o vetor: ");
          scanf("%d",&numero[i]);
          }
      for(i=0;i<10;i++)
       {
          if(numero[i]%2==0)
            cont=cont+1;
         }
      printf("O vetor possui %d  numero(s) pares!\n",cont);
      system("pause");
      return 0;    
  }
