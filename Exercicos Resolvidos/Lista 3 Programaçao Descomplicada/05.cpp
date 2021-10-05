/*Faca um programa que leia um numero inteiro N e depois imprima os N primeiros numeros
naturais impares.*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n=0,i=0;
    
    printf("Digite um numero qualquer: ");
    scanf("%d",&n);
    printf("\nOs primeiros numeros naturais impares de 1 a %d sao :\n",n);
    for(i=0;i<=n;i++)
      {
       if(n%2==1)
       printf("%d ",n);
       }
    system("pause");
    return 0;
}
