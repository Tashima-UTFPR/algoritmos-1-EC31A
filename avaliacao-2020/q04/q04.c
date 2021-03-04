/* Nome: Pedro Henrique Mateus Tashima
 * RA: 2145200
 *
 * Enunciado: Escreva um programa que receba quatro notas de um aluno (float), 
 * calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, 
 * considerando para aprovação média igual ou maior que 7.
 *
 * IN:  quatro numeros reais 
 * OUT: media aritimetica mensagem de aprovado ou nao 
 */
#include <stdio.h>

float arithmetic_mean(float first, float second, float third, float fourth)
{
  return (first + second + third + fourth) / 4; 
}

int main()
{
  float first, second, third, fourth, mean;

  printf("Insira suas 4 notas\n");

  printf("Primeira: ");
  scanf("%f", &first);

  printf("Segunda: ");
  scanf("%f", &second);

  printf("Terceira: ");
  scanf("%f", &third);

  printf("Quarta: ");
  scanf("%f", &fourth);

  mean = arithmetic_mean(first, second, third, fourth);
  if(mean >= 7) {
    printf("Voce passou com media %.2f!\n", mean);
  } else {
    printf("Voce nao passou :(, mas obteve media %.2f\n", mean);
  }

  return 0;
}
