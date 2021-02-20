/*
2. Calcular a média final obtida por um aluno, 
para 4 notas bimestrais.

1 - entradas de dados
  nota1, nota2, nota3, nota4
2 - saídas de dados
  média
3 - processamento
  obter a nota1
	obter a nota2
	obter a nota3
	obter a nota4
	calcular a média
	imprimir a média
4 - fórmulas:
  média = (nota1 + nota2 + nota3 + nota4) / 4		
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int nota1, nota2, nota3, nota4, media;

  printf("Nota 1:");
  scanf("%d", &nota1);

  printf("Nota 2:");
  scanf("%d", &nota2);

  printf("Nota 3:");
  scanf("%d", &nota3);

  printf("Nota 4:");
  scanf("%d", &nota4);

  media = (nota1 + nota2 + nota3 + nota4) / 4;

  printf("Nota 1: %d, Nota 2: %d, Nota 3: %d, Nota 4: %d\nMedia: %d", nota1, nota2, nota3, nota4, media);
  return 0;
}
