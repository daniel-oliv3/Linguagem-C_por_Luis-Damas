#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 506;*/

linha(int num, char ch){  //Fun��o linha(passagem de paremetro);
	int i;
	for(i=1; i<=num; i++){  //1� parametro quantidade de vez do la�o em "num"
		putchar(ch);  //2� parametro imprime a string enviadao por argumento para o parametro ch
	}
	putchar('\n');
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	putchar('\n');
	linha(3, '+');  //passando o valor inteiro 3 e o caractere '+' por argumentos para a fun��o linha();
	linha(5, '+');
	linha(7, '-');
	linha(5, '*');
	linha(3, '*');
	putchar('\n');  //quebra de linha.
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

