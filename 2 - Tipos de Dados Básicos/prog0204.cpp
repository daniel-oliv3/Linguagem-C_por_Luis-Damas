#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que indique qual o numero de bytes que ocupa um inteiro.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("  O tamanho em bytes de um inteiro = %d\n",sizeof(int));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

