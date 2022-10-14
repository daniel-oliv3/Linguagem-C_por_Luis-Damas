#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 3 - escreva um programa que coloque na tela a tabuada do numero 5
o que deve aparecer na tela e:
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n;
	n=1;
	while(n <= 10){
		printf("5 * %2d = %2d\n",n,5*n);
		n=n+1;
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

