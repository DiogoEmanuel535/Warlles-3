#include <stdio.h>

int main(){
  int n1,n2,soma,subtracão,multiplicação,opção;
  float divisão;
  
  printf("Menu de Operações\n");
  printf("1-Soma:\n");
  printf("2-Subtração:\n");
  printf("3-Multiplicação:\n");
  printf("4-Divisão:\n");
  scanf("%d",&opção);

  switch (opção)
  {
  case 1:
   printf("Digite o primeiro numero:\n");
   scanf("%d",&n1);
   printf("Digite o segundo numero:\n");
   scanf("%d",&n2);

   soma = n1+n2;

   printf("A soma dos numeros é:%d\n",soma);
   break;
   case 2:
     printf("Digite o primeiro numero:\n");
   scanf("%d",&n1);
   printf("Digite o segundo numero:\n");
   scanf("%d",&n2);

   subtracão = n1-n2;

   printf("A soma dos numeros é:%d\n",subtracão);
   break;

   case 3:
     printf("Digite o primeiro numero:\n");
   scanf("%d",&n1);
   printf("Digite o segundo numero:\n");
   scanf("%d",&n2);

   multiplicação = n1*n2;

   printf("A Multiplicação dos numeros é:%d\n",multiplicação);
   break;

   case 4:
     printf("Digite o primeiro numero:\n");
   scanf("%d",&n1);
   printf("Digite o segundo numero:\n");
   scanf("%d",&n2);

   divisão = n1/n2;

   printf("A soma dos numeros é:%f\n",divisão);

   
    break;
  
  default:
    break;
  }
return 0;
}
