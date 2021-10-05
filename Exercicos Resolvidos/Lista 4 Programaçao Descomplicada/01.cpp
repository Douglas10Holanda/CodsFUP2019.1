#include<stdio.h>
#include<stdlib.h>


main()
{
int numero[10];
int i,maior,posicao;
      
      for(i=0;i<10;i++)
        {
           printf("Digite um numero para o vetor: ");
           scanf("%d",&numero[i]);
           }
      maior=numero[0];     
      for(i=1;i<10;i++)
        { 
          if(numero[i]>maior)
            {
              maior=numero[i];
              posicao=i;
              }
          }
      printf("O vetor digitado e: ");
      for(i=0;i<10;i++)
          printf(" %d\n",numero[i]);
      printf("O maior elemento do vetor e :%d\n",maior);
      printf("A posicao do maior elemento no vetor e :%d\n",posicao);
      system("pause");
      return 0;    
  }
           
