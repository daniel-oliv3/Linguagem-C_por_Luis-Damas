#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva a função x_isdigit, que verifica se um determinado caractere é digito ou não.
escreva um programa de teste da função;*/

int x_isdigit(char ch){
	return (ch >='0' && ch <= '9');  //escreve todos os caracteres não digitos.
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char c;
	while(1){  //termina com CTRL-C
		c=getchar();
		if(!x_isdigit(c))  //se(não for digito)
		putchar(c);
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

