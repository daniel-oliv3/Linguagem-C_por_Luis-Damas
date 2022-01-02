#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva a função x_toupper, que trasforma qualquer caractere na maiuscula correspondente. escreva um programa de teste de funçã.;*/

int x_toupper(char ch){  //função que escreve todos os caracteres em mauiscula.
	if(ch >= 'a' && ch <= 'z')  //se minuscula
		return ch + 'A' - 'a';
	else
		return ch; //devolve a propria	
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char c;
	while(1){     //termina com CTRL-C
		c=getchar();
		putchar(x_toupper(c));
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

