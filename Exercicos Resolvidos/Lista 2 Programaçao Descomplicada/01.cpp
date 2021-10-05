#include<stdio.h>
#include<stdlib.h>
    
int numero1,numero2;
main()
     {
          printf("Digite o preimeiro numero:");
          scanf("%d",&numero1);
          printf("Digite o segundo numero:");
          scanf("%d",&numero2);
          if(numero1>numero2)        
                 printf("O primeiro numero que foi %d e maior!\n",numero1);
                 else
                 printf("O segundo numero que foi o %d e maior!\n",numero2);
                 system("pause");
                 return 0;
            } 
