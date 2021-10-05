#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    float a,b,c;
    
    printf("Digite um valor para A: ");
    scanf("%f",&a);
    printf("Digite um valor para B: ");
    scanf("%f",&b);
    printf("Digite um valor para C: ");
    scanf("%f",&c);
    if((a<b+c) || (b<a+c) || (c<a+b))
     printf("Os valores digitados formam um triangulo!\n");
     else
     printf("Os valores digitados nao formam um triangulo!");
    if(a==b&&a==c)
     printf("E e um triangulo equilatero!\n");
    if(a!=b && a!=c && b!=c)
     printf("E e um triangulo escaleno!\n"); 
     else
     printf("E e um triangulo isoceles!\n");
    system("pause");
    return 0;
}
