#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int x[200] = {0};
  int y, i;
//Loop que mantem o programa rodando até que seja digitado -1
  while (1) {
//Instrução para o usuario
    printf("Digite um número (0 a 5000): ");
//Ler o que o usuario digitou
    scanf("%d", &y);
//if que para o programa
    if (y == -1) break;
//Salvar os números 
    x[y/32] = x[y/32] | (1 << (y % 32));
  }
//Loop que ordena e printa os números
  for (i = 0; i <= 5000; i++) {
    if ((x[i/32] >> i) & 1) {
      printf("%d\n", i);
    }
  }

  return 0;
}
