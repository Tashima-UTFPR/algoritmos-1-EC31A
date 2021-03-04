/* Nome: Pedro Henrique Mateus Tashima
 * RA: 2145200
 *
 * Enunciado: Dados três números inteiros, 
 * verifique se eles podem compor um triângulo e, 
 * se puderem, classifique o triângulo como equilátero, 
 * isóscele ou escaleno. Para ser lados de um triangulo 
 * cada lado deve ser menor que a soma dos outros dois lados. 
 * Um triângulo equilátero possui os três lados iguais; 
 * um triângulo isóscele possui apenas dois lados iguais e 
 * em um triângulo escaleno nenhum dos lados é igual. 
 * Se os três números lidos não puderem compor um 
 * triângulo, mostre uma mensagem e erro.
 *
 * IN:  tres numeros inteiros
 * OUT: Pode ser triangulo ou nao, se sim, o tipo do triangulo 
 */
#include <stdio.h>
#include <stdlib.h>

void canBeTriangle(int first, int second, int third)
{
  if((first + second) < third || (first + third) < second || (third + second) < first)
  {
    printf("Nao pode ser triangulo\n");
    exit(0);
  }
  printf("Pode ser triangulo!\n");
}

void isEquilateral(int first, int second, int third)
{
  if(first == second == third)
  {
    printf("Equilatero!\n");
    exit(0);
  }
}

void isIsoceles(int first, int second, int third)
{
  if(first == second || first == third || second == third)
  {
    printf("Isoceles!\n");
    exit(0);
  }
}

void isScalene(int first, int second, int third)
{
  if(first != second || first != third || second != third)
  {
    printf("Escaleno!\n");
    exit(0);
  }
}

int main()
{
  int first, second, third;

  printf("Digite tres numeros para verificar se eles podem ser triangulos ou nao e se sim, o tipo dele\n");

  printf("Primeiro: ");
  scanf("%d", &first);

  printf("Segundo: ");
  scanf("%d", &second);

  printf("Terceiro: ");
  scanf("%d", &third);

  canBeTriangle(first, second, third);
  isEquilateral(first, second, third);
  isIsoceles(first, second, third);
  isScalene(first, second, third);

  return 0;
}
