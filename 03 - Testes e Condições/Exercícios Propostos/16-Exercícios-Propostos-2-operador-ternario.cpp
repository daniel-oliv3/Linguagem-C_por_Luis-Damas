#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 16.	Escreva um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro e ou não é igual a zero.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	numero == 0 ? puts("  O número é igual a 0 (zero)\n") : puts("  O número não é igual a 0 (zero)\n\a");  //operador ternario.
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

