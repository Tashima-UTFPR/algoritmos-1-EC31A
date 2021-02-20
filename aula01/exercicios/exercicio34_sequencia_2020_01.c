/*
34. Calcular a quantidade de latas de tinta
necess�rias, e tamb�m o custo, para pintar 
um tanque cil�ndrico de combust�vel, 
em que s�o fornecidos a altura e o raio do 
mesmo, al�m do pre�o da lata de tinta.
Sabe-se que:
a)cada lata cont�m 5 litros de tinta;
b)cada litro de tinta pinta 3 metros 
  quadrados;

entradas de dados:
	 altura, raio, pre�o da lata de tinta
sa�das de dados:
	 quantidade de latas, custo
processamento
	 calcular quantos metros quadrados possui
	   o cilindro
		 	 area = 2 * 3.14 * raio ^ 2 +
					 	  altura * 2 * 3.14 * raio
   calcular a quantidade de latas
   	 quantidade = area / 15
   calcular o custo
	   custo = quantidade * pre�o da lata
		 
passos para o programa

		obter o valor do raio do cilindro
		obter o valor da altura do cilindro
		obter o pre�o da lata de tinta		 	 
	  calcular quantos metros quadrados possui
	    o cilindro
		 	  area = 2 * 3.14 * raio ^ 2 +
					 	  altura * 2 * 3.14 * raio
    calcular a quantidade de latas
   	  quantidade = area / 15
    calcular o custo
	    custo = quantidade * pre�o da lata
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
  printf("\nInforme o pre�o da lata de tinta: ");
  scanf("%f",&preco);
	  
  area = 2 * M_PI * pow(raio, 2.0) + altura * 2 * M_PI * raio;
	quantidade = area / 15;
	custo = quantidade * preco;
	
	printf("\nSer�o necess�rias %0.2f latas de tinta",quantidade);
	printf("\nO custo ser� de %0.2f reais",custo);
	
	return 0;		
}