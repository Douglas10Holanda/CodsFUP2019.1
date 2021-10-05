#include<stdio.h>
#include<stdlib.h>

float dias_trabalhados,quantia;

main ()
 {
     printf("Qual foi o numero de dias trabalhados?:");
     scanf("%f",&dias_trabalhados);
     quantia=((30.0*dias_trabalhados)-(30.0*dias_trabalhados)*(0.08));
     printf("Voce recebera a quantia de:%f\n",quantia);
     system("pause");
     return 0;
     }
