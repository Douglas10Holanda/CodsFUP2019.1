#include<stdio.h>
#include<stdlib.h>

int n1,n2,n3,aux,soma=0;
int main()
      {
               printf("Digite um numero:");
               scanf("%d",&n1);
               printf("Digite um numero:");
               scanf("%d",&n2);
               printf("Digite um numero:");
               scanf("%d",&n3);
               aux=(n1*n1);
               n1=aux;
               aux=(n2*n2);
               n2=aux;
               aux=(n3*n3);
               n3=aux;
               soma=(n1+n2+n3);
               printf("O quadrado do numero digitado foi :%d\n",soma);
               system("pause");
               return 0;
               }
