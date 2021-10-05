#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float numero,raiz=0,quad=0;
main()
 {
      printf("Digite um numero:");
      scanf("%f",&numero);
      if(numero>0)
       {
          raiz=(sqrt(numero));        
          printf("A raiz quadrada e:%.1f\n ",raiz);
          }
          else
           {
             quad=(numero*numero);       
             printf("O quadrado e :%.1f\n",quad);
             } 
             system("pause");
             return 0;
       }
