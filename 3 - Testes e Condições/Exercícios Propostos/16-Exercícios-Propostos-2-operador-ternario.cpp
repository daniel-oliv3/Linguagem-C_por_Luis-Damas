#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 16.	Escreva um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro e ou n�o � igual a zero.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	numero == 0 ? puts("  O n�mero � igual a 0 (zero)\n") : puts("  O n�mero n�o � igual a 0 (zero)\n\a");  //operador ternario.
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

