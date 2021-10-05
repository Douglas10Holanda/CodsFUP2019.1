/*Fac¸a um programa que calcule e mostre a soma dos 50 primeiros numeros pares.*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i=0,soma=0;
    
    for(i=1;i<5;i++)
     {
       if(i%2==0)              
        soma=(soma+i);
        }
     printf("A soma dos 50 primeiros numeros pares e: %d\n",soma);
     system("pause");
     return 0;
     }
