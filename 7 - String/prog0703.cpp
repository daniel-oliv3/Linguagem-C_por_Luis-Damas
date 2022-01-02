#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*703 - Strings;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[50];
	printf("  Digite seu nome completo: ");
	gets(nome);
	printf("  Nome completo: %s\n",nome);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

