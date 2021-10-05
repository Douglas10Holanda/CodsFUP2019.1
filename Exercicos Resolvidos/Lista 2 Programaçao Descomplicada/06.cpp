#include<stdio.h>
#include<stdlib.h>

float trab,avaliacao,exame,media;
 main() 
 {
       printf("Entre com a nota do trabalho de laboratorio: ");
       scanf("%f",&trab);
       printf("Entre com a nota da Avalicao Semestral :");
       scanf("%f",&avaliacao);
       printf("Entre com a nota do Exame Final: ");
       scanf("%f",&exame);
       media=(((trab*2)+(avaliacao*3)+(exame*5))/10);
       if(media<=2.9)
        printf("Reprovado\n");
       if(media>=3.0 && media<=4.9)
         printf("Recuperacao\n");
         else
         printf("Aprovado\n");
       system("pause");
       return 0;
       }
