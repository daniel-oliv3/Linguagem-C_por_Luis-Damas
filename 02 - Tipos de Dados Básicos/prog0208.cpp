#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que realize a convers�o de toleladas para quilos e gramas escrevendo o
resultado em nota��o tradicional (aaaa.bbb) e cientifica (aaa.E+_bb).;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float quilos = 1.0E3; // uma tonelada s�o 1000 quilos
	double gramas = 1.0e6; // uma tonelada s�o 1.000.000 de gramas  
	float n_toneladas;
	printf("  Quantas toneladas comprou: ");
	scanf("%f",&n_toneladas);
	printf("  N� de quilos = %f = %e\n",n_toneladas*quilos, n_toneladas*quilos);
	printf("  N� de gramas = %f = %E\n",n_toneladas*gramas, n_toneladas*gramas);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

