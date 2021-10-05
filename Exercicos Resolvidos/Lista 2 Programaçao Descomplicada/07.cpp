#include<stdio.h>
#include<stdlib.h>
    
int numero1;
main()
     {
          printf("Digite o numero:");
          scanf("%d",&numero1);
          if(numero1%2==0)        
                 printf("o numero digitado e par\n");
                 else
                 printf("O numero digitado e impar!\n");
                 system("pause");
                 return 0;
                 }
