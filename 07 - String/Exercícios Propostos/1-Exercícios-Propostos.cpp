#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* 1 - declare uma string com capacidade de armazenar um nome com 25 caracteres;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[25+1];
	printf("  Digite um nome: ");
	//gets(string);
	scanf("%s", string);
	system("cls");
	putchar('\n');
	printf("  Nome digitado é: %s\n",string);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

