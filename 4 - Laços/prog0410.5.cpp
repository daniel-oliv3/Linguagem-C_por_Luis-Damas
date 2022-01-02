#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que mostre os 10 primeiros números pares;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=2; i<=20; i=i+2){
		printf("%2d\n",i);
	}
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

