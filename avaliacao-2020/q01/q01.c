/* Nome: Pedro Henrique Mateus Tashima
 * RA: 2145200
 * Enunciado: Escreva um programa que receba dois números 
 * reais e execute as operações listadas a seguir, 
 * de acordo com a escolha do usuário. Se a opção digitada for inválida, 
 * mostre uma mensagem de erro e termine a execução do programa. 
 * Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero. 
 * Use a estrutura switch...case para coordenar as escolhas do usuário.
 *
 * IN:  dois numeros reais
 * OUT: media entre os numeros, diferenca do maior pelo menor, 
 *      produto, divisao do primeiro pelo segundo
 */
#include <stdio.h>
//#include <assert.h>

float arithmetical_mean(float firstNumber, float secondNumber)
{
  return (firstNumber + secondNumber) / 2;
}

float difference(float firstNumber, float secondNumber)
{
  if(firstNumber > secondNumber) 
    return firstNumber - secondNumber;
  return secondNumber - firstNumber;
}

float product(float firstNumber, float secondNumber)
{
  return (firstNumber * secondNumber);
}

float division(float firstNumber, float secondNumber)
{
  //assert(firstNumber > 0 ||  secondNumber > 0);
  if(firstNumber <= 0 || secondNumber <= 0)
  {
    printf("Nenhum dos numeros pode ser 0\n");
    return 0;
  }
  return firstNumber / secondNumber;
}

int main()
{
  float firstNumber, secondNumber, mean, diff, prod, divi;
  int option;

  printf("Digite dois numeros reais: \n");

  printf("Primeiro: ");
  scanf("%f", &firstNumber);

  printf("Segundo: ");
  scanf("%f", &secondNumber);

  printf("Escolha uma opcao: \n");
  printf("1 - Media entre os numeros\n");
  printf("2 - Diferenca do maior pelo menor\n");
  printf("3 - Produto entre os numeros digitados\n");
  printf("4 - Divisao do primeiro pelo segundo\n");
  scanf("%d", &option);

  switch(option)
  {
    case 1:
      mean = arithmetical_mean(firstNumber, secondNumber);
      printf("%.2f\n", mean);
      break;
    case 2:
      diff = difference(firstNumber, secondNumber);
      printf("%.2f\n", diff);
      break;
    case 3:
      prod = product(firstNumber, secondNumber);
      printf("%.2f\n", prod);
      break;
    case 4:
      divi = division(firstNumber, secondNumber);
      printf("%.2f\n", divi);
      break;
    default:
      printf("Invalid option\n");
      return 0;
  }


  return 0;
}

