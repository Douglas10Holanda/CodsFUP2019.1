#include<stdio.h>
#include<stdlib.h>

int c,f=0;
 main()
    {
        printf("Digite a temperatura em Celsius:");
        scanf("%d",&c);
        f=(c*(9.0/5.0)+320);
        printf("A tempera de Celsdius para Fahrenheit e:%d",f);
        system("pause");
        return 0;
        }
