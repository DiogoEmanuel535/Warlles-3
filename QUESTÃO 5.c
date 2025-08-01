#include <stdio.h>

int main(){
  int i;
  printf("Digite Um Numero:\n");
  scanf("%d",&i);

  if((i % 2 == 0||i % 3 == 0)&& !(i % 2 == 0 && i % 3 ==0)){
    printf("O número %d é divisivel por 2 e 3,mas não pelos os 2 ao mesmo tempo.\n",i);
  }else{
    printf("O número %d Não atende aos requisitos.\n",i);
  }
}
