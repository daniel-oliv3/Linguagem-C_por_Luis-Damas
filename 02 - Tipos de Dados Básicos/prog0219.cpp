#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa em c que solicite um determinado número real e mostre qual a sua parte inteira e a sua parte fracionária.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float x;
	printf("  Digite um número real: ");
	scanf("%f",&x);
	printf("  Parte Inteira: %d\n",(int)x);
	printf("  Parte Fracionária: %f\n",x-((int)x));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

