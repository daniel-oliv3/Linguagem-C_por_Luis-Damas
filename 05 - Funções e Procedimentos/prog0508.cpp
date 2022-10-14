#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

void linha(); //declaração dafunção linha(); prototipo da função(procedimento).

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	linha();
	printf("Hello World\n");
	linha();
	system("Pause");
	return 0;
}

void linha(){
	int i;
	for(i=1; i<=20; i++){
		putchar('*');
	}
	putchar('\n');
}



/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

