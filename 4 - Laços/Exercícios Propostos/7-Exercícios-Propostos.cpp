#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 7.	Reescreva o seguinte trecho de um programa, utilizando o laço while.

for ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=1; i<=20; i++){
		if(i==10)  // vai pular o número 10
			continue;
		else
			printf("%d\n",i);
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

