#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float a,b,h=0;
main( )
 {
      printf("Digite o valor de A:");
      scanf("%f",&a);
      printf("Digite o valor de B:");
      scanf("%f",&b);
      h=(sqrt((a*a)+(b*b)));
      printf("A hipotenuza e :%f\n",h);
      system("pause");
      return 0;
      }
