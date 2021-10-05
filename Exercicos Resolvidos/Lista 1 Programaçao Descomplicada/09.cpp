#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float raio,area=0,pi=3.14;
int main(void)
      {
               printf("Digite o raio do circulo:");
               scanf("%f",raio);
               area=(pi*(raio*raio));
               printf("A area do circulo e:%f\n",area);
               system("pause");
               return 0;
               }
