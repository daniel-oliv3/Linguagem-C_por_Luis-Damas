#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 7.	Reescreva o seguinte trecho de um programa, utilizando o laço while.

do while ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i=0;
	do{
		i++;
		if(i==10)
			continue;
		else	
		printf("%d\n",i);
	}while(i<20);
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

