#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 2 - o que faz o programa que se segue
imprime de 10 a 1 ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n;
	n=10;
	while(n){  //(n != 0){       // mesma coisa
		printf("%d\n",n);
		n=n-1;
	}
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

