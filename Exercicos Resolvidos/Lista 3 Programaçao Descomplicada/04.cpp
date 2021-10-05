/*Faca um programa que determine o mostre os cinco primeiros multiplos de 3, conside- ´
rando numeros maiores que 0*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    int i,multiplo;
    i=1;
    multiplo=0;
    printf("Mostrando o 5 primeiros multiplos de 3.\n"); 
    while (i>0)
    {
      if(i%3==0)
       {
        printf("%d\n",i);
        multiplo=(multiplo+1);
        }
       if(multiplo==5)
       {
          break;
       }
       i++;
      }
    system("pause");
    return 0;
}
