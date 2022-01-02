#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que coloque na tela a seguinte saída;;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("Total \t=\t100%%\n");
	printf("IVA \t=\t17%%\n");
	printf("IRS \t=\t15%%\n");
	printf("----------------------\n");
	printf("Líq. \t=\t68%%\n");
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

