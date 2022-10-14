#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa em c que apresente duas linhas com a string " aqui vai um apito,
ouvindo-se ao final de cada string um sinal sonoro;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("  Aqui vai um Apito\7\n");
	printf("  Aqui vai um Apito\a\n");  //\a sinal sonoro
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

