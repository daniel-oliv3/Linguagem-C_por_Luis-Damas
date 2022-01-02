#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa em c que escreva na tela toda a tabela ASCII	(0..255 chars), escrevendo em cada
linha o códig ASCII e o caractere correspondente.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=0; i<=255; i++){
		printf("  %3d --> %c\n",i,(char)i); //(char)casting
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

