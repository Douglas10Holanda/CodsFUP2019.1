#include<stdio.h>
#include<stdlib.h>

main()
{
      float notas[15];
      int i;
      float media;
      
      for(i=0;i<15;i++)
       {
        printf("Entre com uma nota: ");
        scanf("%f",&notas[i]);
        }
      for(i=0;i<15;i++)
         media=(media+notas[i]);
      media=(media/15);
      printf("A media das notas digitadas foi :%f\n",media);
      system("pause");
      return 0;
 }
      
