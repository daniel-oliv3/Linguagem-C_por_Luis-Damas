#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que indique qual o numero de bytes que ocupa um char, int, float, double.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	putchar('\n'); //quebra de linha...
	printf("  O tamanho em bytes de um char = %d\n",sizeof(char));
	printf("  O tamanho em bytes de um int = %d\n",sizeof(int));
	printf("  O tamanho em bytes de um float = %d\n",sizeof(float));
	printf("  O tamanho em bytes de um double = %d\n",sizeof(double));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

