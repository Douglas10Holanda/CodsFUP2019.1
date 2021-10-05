#include<stdio.h>
#include<stdlib.h>


main( )
{
      int numero[10];
      int i;
      
      for(i=0;i<10;i++)
       {
          printf("Digite um valor para o vetor: ");
          scanf("%d",&numero[i]);
          }
      for(i=0;i<10;i++)
       {
          if(numero[i]<0)
            numero[i]=0;
         }
      printf("Depois da manipulacao o vetor ficar assim:\n");
      for(i=0;i<10;i++)
          printf("%d \n",numero[i]); 
      system("pause");
      return 0;    
  }
