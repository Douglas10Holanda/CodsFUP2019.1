#include<stdio.h>
#include<stdlib.h>

int altura_degrau,altura_desejada,qtd_degraus;

main( )
 {
      printf("Digite a altura em cm do degrau: ");
      scanf("%d",&altura_degrau);
      printf("Digite a altura em cm que deseja alcancar: ");
      scanf("%d",&altura_desejada);  
      qtd_degraus=(altura_desejada/altura_degrau);
      printf("Voce tera que subir %d  degraus para alcancar a altura desejada!\n",qtd_degraus);
      system("pause");
      return 0;
      }
      
