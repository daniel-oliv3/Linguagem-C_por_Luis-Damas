#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva a fun��o x_isdigit, que verifica se um determinado caractere � digito ou n�o.
escreva um programa de teste da fun��o;*/

int x_isdigit(char ch){
	return (ch >='0' && ch <= '9');  //escreve todos os caracteres n�o digitos.
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char c;
	while(1){  //termina com CTRL-C
		c=getchar();
		if(!x_isdigit(c))  //se(n�o for digito)
		putchar(c);
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

