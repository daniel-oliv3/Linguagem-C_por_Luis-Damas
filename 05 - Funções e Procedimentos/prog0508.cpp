#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

void linha(); //declara��o dafun��o linha(); prototipo da fun��o(procedimento).

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
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

