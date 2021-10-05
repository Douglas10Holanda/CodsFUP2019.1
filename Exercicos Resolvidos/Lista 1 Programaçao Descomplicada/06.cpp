#include<stdio.h>
#include<stdlib.h>

float not1,not2,not3,not4,media;
int main()
      {
               printf("Digite a primeira nota:");
               scanf("%f",&not1);
               printf("Digite a segunda nota:");
               scanf("%f",&not2);
               printf("Digite a terceira nota:");
               scanf("%f",&not3);
               printf("Digite a quarta nota:");
               scanf("%f",&not4);
               media=((not1+not2+not3+not4)/4);
               printf("A media aritimetica das notas e:%f\n",media);
               system("pause");
               return 0;
               }
