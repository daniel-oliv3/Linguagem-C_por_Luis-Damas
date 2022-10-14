#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que leia um caractee e a seguir escreva na tela.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch;
	printf("  Introduza um caractere: ");
	scanf("%c",&ch);
	printf("  O caractere introduzido foi: '%c'\n",ch);  //aspas simpes dentro de uma string e um caractere como outro qualquer
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

