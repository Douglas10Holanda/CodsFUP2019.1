#include<stdio.h>
#include<stdlib.h>

int anoN,anoA;
main()
 {
      printf("Digite o ano de nascimento:");
      scanf("%d",&anoN);
      printf("Digite o ano atual:");
      scanf("%d",&anoA);
      printf("Sua idade e :%d\n",(anoA-anoN));
      system("pause");
      return 0;
      }
