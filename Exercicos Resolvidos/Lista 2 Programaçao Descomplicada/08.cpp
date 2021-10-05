#include<stdio.h>
#include<stdlib.h>

int main (void)
{
  int num1,num2,num3;
  
  printf("Insira um numero:");
  scanf("%d",&num1);
  printf("Insira um numero:");
  scanf("%d",&num2);
  printf("Insira um numero:");
  scanf("%d",&num3);
  if(num1<num2 && num2<num3)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",num1,num2,num3);
     }
  else if(num1<num3 && num3<num2)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",num1,num3,num2);  
     }
  else if(num2<num1 && num1<num3)
  {
      printf("A ordem crescente dos numeros digitados e :%d %d %d\n",num2,num1,num3);
     }
  else if(num2<num3 && num3<num1)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",num2,num3,num1);  
     }
  else if (num3<num1 && num1<num2)
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",num3,num1,num2);
     }
  else
  {
     printf("A ordem crescente dos numeros digitados e :%d %d %d\n",num3,num2,num1);
     }          
  system("pause");
  return 0;
}
