
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float salario,novo_salario;
main()
 {
      printf("Digite o salario do funcionario:");
      scanf("%f",&salario);
      novo_salario=(salario+(salario*0.25));
      printf("O salario atual e:%f\n",novo_salario);  
      system("pause");                               
      return 0;                                      
      }
