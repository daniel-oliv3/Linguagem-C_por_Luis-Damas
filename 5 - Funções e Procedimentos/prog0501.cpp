#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 501 - Escreva um programa que coloque na tela a seguinte saida, escrevendo a linha de 20 asteriscos
atraves de um la�o for;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	//escrita do cabe�alho
	for(i=1; i<=20; i++){
		putchar('*');
	}
	putchar('\n');
	puts("N�meros entre 1 e 5");
	for(i=1; i<=20; i++){
		putchar('*');
	}
	putchar('\n');
	//escrita dos N�s
	for(i=1; i<=5; i++){
		printf("%d\n",i);
	}
	for(i=1; i<=20; i++){
		putchar('*');
	}
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

