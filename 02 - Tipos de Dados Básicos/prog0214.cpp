#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite um inteiro (entre 0 e 255) ao usuario e mostre o inteiro seguinte e o caractere correspondente;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num;
	printf("  Digite um inteiro: ");
	scanf("%d",&num);
	printf("\n  Foi digitado %d cujo caractere = '%c'\n",num,(char)num);
	printf("  O caractere seguinte = '%c' tem o ASCII nº %d\n",(char)(num+1),num+1);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

