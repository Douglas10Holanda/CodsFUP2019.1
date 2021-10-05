#include<stdio.h>
#include<stdlib.h>

float primeiro,segundo,terceiro;
main ( )
  {
       primeiro=(780.000-(780.000*0.46));
       segundo=(780.000-(780.000*0.32));
       terceiro=((primeiro+segundo)-780.000);
       printf("O primeiro colocado ganhara a quantia de :%.3f\n",primeiro);
       printf("O segundo colocado ganhara a quantia de :%.3f\n",segundo);
       printf("O terceiro colocado ganhara a quantia de :%.3f\n",terceiro);
       system("pause");
       return 0;
       }
