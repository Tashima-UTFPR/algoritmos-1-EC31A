/* Nome: Pedro Henrique Mateus Tashima
 * RA: 2145200
 *
 * Enunciado: Dados três números inteiros distintos, exiba-os em ordem crescente 
 *
 * IN:  tres numeros inteiros distintos
 * OUT: numeros inseridos em ordem crescente 
 */
#include <stdio.h>
#include <assert.h>

//caso mais numeros fossem adicionados, poderia ser transformada em uma funcao recursiva
void sort(int *first, int *second, int *third)
{
  assert(*first != *second && *second != *third && *third != *first);
  int temp;
  if(*third > *second) {
    temp = *second;
    *second = *third;
    *third = temp;
  }
 if(*second > *first) {
    temp = *first;
    *first = *second;
    *second = temp;
  }
}

int main()
{
  int first, second, third;
  
  printf("Digite tres numeros inteiros distintos:\n");

  printf("Primeiro: ");
  scanf("%d", &first);

  printf("Segundo: ");
  scanf("%d", &second);

  printf("Terceiro: ");
  scanf("%d", &third);

  sort(&first, &second, &third);

  printf("%d > %d > %d\n", first, second, third);

  return 0;
}
