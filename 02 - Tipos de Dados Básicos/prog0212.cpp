#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite, atraves da função scanf, um caractere ao usuario e, em seguida, peça outro.
depois de introduzidos ambos os caracteres, tal programa devera mostrar os dois caracteres lidos entre aspas simples.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch1, ch2;
	printf("  Introduza um caractere: ");
	scanf("%c",&ch1);
	printf("  Introduza outro caractere: ");
	scanf("%c",&ch2);
	printf("  Os caracteres introduzidos foram: '%c' e '%c'\n",ch1,ch2);  //aspas simpes dentro de uma string e um caractere como outro qualquer
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

