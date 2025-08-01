#include <stdio.h>

int main(){
  int numP,n1,n2,n3,n4,n5;

  printf("Digite um numero de 5 digitos:\n");
  scanf("%d",&numP);

  n1 = numP/10000;
  n2 = (numP/1000)%10;
  n3 = (numP/100)%10;
  n4 = (numP/10)%10;
  n5 = numP%10;
  
  printf("%d  %d  %d  %d  %d\n",n1,n2,n3,n4,n5);


return 0;
}
