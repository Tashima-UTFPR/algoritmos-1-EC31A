/*
1. Obter o nome e a idade de um usu�rio e escrever na tela a 
seguinte mensagem: Hello! FULANO, voc� tem XX anos!

1 - entradas de dados
  nome
  idade
2 - sa�das de dados
  imprimir a frase --> Hello! FULANO, voc� tem XX anos!
3 - processamento
  obter o nome da pessoa
  obter a idade da pessoa
  escreva a frase, substitundo FULANO pelo nome e XX pela idade
4 - f�rmula
  n�o h�  
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	char nome[50];
	printf("Digite seu nome: ");
//scanf que l� string at� o primeiro espa�o
//	scanf("%s",&nome);
//scanf formatado que l� string com espa�os
//	scanf("%[^\n]s",&nome);
  fflush(stdin); //limpa o buffer de teclado. SEMPRE ANTES DE LER string
//gets que l� string com espa�os
	gets(nome);
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	printf("\nHello! %s, voc� tem %d anos!\n\n",nome,idade);	
	//system("pause");
  return 0;	
}
