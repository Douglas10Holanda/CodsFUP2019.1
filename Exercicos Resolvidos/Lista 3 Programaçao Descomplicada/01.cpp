#include<stdio.h>
#include<stdlib.h>

int maior,menor,numero;

main()
{  
      do 
      {
      printf("Digite um numero:");
      scanf("%d",&numero);
       if(numero>maior)
         maior=numero;
       if(numero=! (numero<0))  
          menor=numero;
       }while(numero>0);
       printf("O maior numero digitado foi:%d\n",maior);
       printf("O menor numero digitado foi:%d\n",menor);
       system("pause");
       return 0;
       }
