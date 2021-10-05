#include<stdio.h>
#include<stdlib.h>

int numero,c,d,u;
main( )
 {
      printf("Digite um numero de tres digitos:");
      scanf("%d",&numero);
      c=(numero/100);
      numero=(numero % 100);
      d=(numero/10);
      u=(numero % 10);
      printf("O numero digitado invertido e :%d%d%d\n",u,d,c);
      system("pause");
      return 0;
      }
