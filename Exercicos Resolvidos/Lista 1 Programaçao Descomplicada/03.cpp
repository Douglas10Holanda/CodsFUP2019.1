#include<stdio.h>
#include<stdlib.h>

int numero,ant,suc;
main()
  {
      printf("Digite um numero qualquer:");
      scanf("%d",&numero);
      ant=(numero-1);
      suc=(numero+1);
      printf("O antecessor do numero digitado e %d e o sucessor e %d ",ant,suc);
      system("pause");
      return 0;
      }
