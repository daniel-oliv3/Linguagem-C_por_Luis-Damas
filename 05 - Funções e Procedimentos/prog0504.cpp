#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 504 - Escreva um programa que, recorrendo a tr�s fun��es distintas, 
escreve na tela a seguinte saida;

***
*****
*******
*****
***

*/

linha3x(){ //fun��o que imprime: ***
	int i;
	for(i=1; i<=3; i++){
		putchar('*');
	}
	putchar('\n');
}

linha5x(){ //fun��o que imprime: *****
	int i;
	for(i=1; i<=5; i++){
		putchar('*');
	}
	putchar('\n');
}

linha7x(){  //fun��o que imprime: *******
	int i;
	for(i=1; i<=7; i++){
		putchar('*');
	}
	putchar('\n');
}


int main()  //fun��o principal.
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	putchar('\n');
	linha3x();  //chamada a fun��o...
	linha5x();
	linha7x();
	linha5x();
	linha3x();
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

