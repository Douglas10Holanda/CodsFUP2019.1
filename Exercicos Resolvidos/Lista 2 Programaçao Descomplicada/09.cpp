#include<stdio.h>
#include<stdlib.h>                                                                                    

float peso,altura;
main()
 {
      printf("Digite a altura da pessoa: ");
      scanf("%f",&altura);
      printf("Digite o peso da pessoa: ");
      scanf("%f",&peso);
      if(altura<1.20 && peso<=60)                
          printf("A\n");
      else if(altura>=1.20 && altura<=1.70 && peso<=60)
          printf("B\n");
      else if (altura>=1.70 && peso<=60)
          printf("C\n");
      else if (altura<1.20 ||  peso>=60 && peso>=90 )
          printf("D\n");
      else if(altura>=1.20 && altura<=1.70 && peso>=60 || peso>=90)
          printf("E\n");
      else if (altura>1.70 && peso>=60 && peso>=90)
          printf("F\n");
      else if(altura<1.20&& peso>=90)
         printf("G\n");
      else if(altura>=1.20 && altura<=1.70 && peso>=90)
         printf("H\n");
         else
         printf("I\n");
      system("pause");
      return 0;
      } 
