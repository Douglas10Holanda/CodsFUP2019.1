/*Escreva um programa que leia o numero de habitantes de uma determinada cidade, o ´
valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mesˆ
e o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o ´
maior, o menor e a media do consumo dos habitantes; e por fim o total do consumo de ´
cada categoria de consumidor.*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
 { 
  int habit=0,cod=0,cont=0;
  float valkw=0,consumo=0,res=0,menor=0,maior=0,com=0,ind=0,med=0;
  
  printf("Digite o numero de habitantes :");
  scanf("%d",&habit);
  printf("Digite o valor do kw:");
  scanf("%f",&valkw);
  do 
   {
     cont=cont+1;                
     printf("Digite o consumo do mes do %d habitante: \n\n",cont);
     scanf("%f",&consumo);
     med=(med+consumo);
     printf("Digite o codigo do consumidor:\n\n");
     printf("1-Residencial  2-Comercial ou 3-Industrial\n\n");
     scanf("%d",&cod);
     case(cod=1);
       res=(res+consumo);
       break;
     case(cod=2)
       com=(com+consumo);
       break;
     case(cod=3)
       ind=(ind+consumo);
       break;
     if(consumo>maior)
       menor=consumo;
     if(menor>maior)
       maior=menor;
     }while(habit>cont);
     printf("A media do consumo dos habitantes doi de %.2f\n\n",med=(med/habit));
     printf("A categoria residencial teve um consumo de:%.2f\n\n",res);
     printf("A categoria comercial teve um consumo de:%.2f\n\n",com);
     printf("A categoria industrial teve um consumo de:%.2f\n\n",ind);
     printf("O maior consumo foi: %.2f \n\n",maior);
     printf("O menor consumo foi: %.2f \n\n",menor);
     system("pause");
     return 0;
     }
