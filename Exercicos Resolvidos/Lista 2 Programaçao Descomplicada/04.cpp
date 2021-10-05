#include<stdio.h>
#include<stdlib.h>

float salario,prestacao,porcento;
main()
 {
      printf("Digite o valor do salario do trabalhador: ");
      scanf("%f",&salario);
      printf("Digite o valor da prestaçao: ");
      scanf("%f",&prestacao);
      porcento=((prestacao*100)/salario);
      if(porcento>20)
        printf("Emprestimo nao concedido!\n");
        else
         printf("Emprestimo concedido!\n");
      system("pause");
      return 0;
      }
