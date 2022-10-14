#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

linha(){  //função linha, escreve uma linha com 20 asterisco na tela.
	int i;
	for(i=1; i<=20; i++){
		putchar('*');
	}
	putchar('\n');
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	linha(); // escreve uma linha de asterisco.
	puts("Números entre 1 e 5");
	linha(); //escreve outra linha de asterisco.
	for(i=1; i<=5; i++){
		printf("%d\n",i);
	}
	linha();
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

