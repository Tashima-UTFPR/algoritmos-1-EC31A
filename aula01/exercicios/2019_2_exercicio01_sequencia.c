/*
1. Obter o nome e a idade de um usu�rio e escrever na tela a seguinte mensagem: 
Hello! FULANO, voc� tem XX anos!

entradas de dados: nome, idade
sa�da de dados: Hello! FULANO, voc� tem XX anos!
processamento: n�o h�

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");
  
  char nome[50];
  int idade;
  
  printf("Digite o nome da pessoa: ");
  fflush(stdin);
	gets(nome);
  printf("Digite a idade da pessoa: ");
  scanf("%d",&idade);
  
	printf("\nHello! %s, voc� tem %d anos!\n",nome,idade);
	
  int c = getchar();	
		
	return 0;
}
