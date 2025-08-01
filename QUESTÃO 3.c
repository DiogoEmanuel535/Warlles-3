#include <stdio.h>

int main(){
  short idade;
  int Deposito;
  long numConta;
  printf("Digite Sua Idade:\n");
  scanf("%hd",&idade);
  printf("Digite o Valor do Deposito:\n");
  scanf("%d",&Deposito);
  printf("Digite o Numero de Conta:\n");
  scanf("%ld",&numConta);

  printf("A Idade é: %hd anos\n",idade);
  printf("O Montante é: R$%d\n",Deposito);
  printf("O Número da Conta é : %ld\n",numConta);
  



return 0;
}
