#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Strings;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[50], sobreNome[50];
	printf("  Digite seu nome: ");
	scanf("%s",nome);  //as variaveis que recebem a string nunca s�o precedidas do &
	printf("  Digite seu sobre-nome: ");
	scanf("%s",sobreNome);
	printf("  Nome completo: %s %s\n",nome,sobreNome);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

