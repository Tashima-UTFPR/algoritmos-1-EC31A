/*
34. Calcular a quantidade de latas de tinta
necessárias, e também o custo, para pintar 
um tanque cilíndrico de combustível, 
em que são fornecidos a altura e o raio do 
mesmo, além do preço da lata de tinta.
Sabe-se que:
a)cada lata contém 5 litros de tinta;
b)cada litro de tinta pinta 3 metros 
  quadrados;

entradas de dados:
	 altura, raio, preço da lata de tinta
saídas de dados:
	 quantidade de latas, custo
processamento
	 calcular quantos metros quadrados possui
	   o cilindro
		 	 area = 2 * 3.14 * raio ^ 2 +
					 	  altura * 2 * 3.14 * raio
   calcular a quantidade de latas
   	 quantidade = area / 15
   calcular o custo
	   custo = quantidade * preço da lata
		 
passos para o programa

		obter o valor do raio do cilindro
		obter o valor da altura do cilindro
		obter o preço da lata de tinta		 	 
	  calcular quantos metros quadrados possui
	    o cilindro
		 	  area = 2 * 3.14 * raio ^ 2 +
					 	  altura * 2 * 3.14 * raio
    calcular a quantidade de latas
   	  quantidade = area / 15
    calcular o custo
	    custo = quantidade * preço da lata
    mostrar o custo
    mostrar a quantidade de latas
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
  float raio, altura, preco, custo, area, quantidade;
  
  printf("\nInforme o valor do raio do cilindro: ");
  scanf("%f",&raio);
  printf("\nInforme o valor da altura do cilindro: ");
  scanf("%f",&altura);
  printf("\nInforme o preço da lata de tinta: ");
  scanf("%f",&preco);
	  
  area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
	quantidade = area / 15;
	custo = quantidade * preco;
	
	printf("\nSerão necessárias %0.2f latas de tinta",quantidade);
	printf("\nO custo será de %0.2f reais",custo);
	
	return 0;		
}