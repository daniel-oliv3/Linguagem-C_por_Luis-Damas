#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define N_STRINGS 3


/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char vetor[N_STRINGS][20] = {"Olá", "Antônio", "Susana"};
	char (*ptr)[20] = vetor; // ponteiro para vetores de 20 chars
	char *p;
	while(ptr-vetor<N_STRINGS){
		p = *ptr;  //p recebe a string apontada por ptr
		while(*p)
			putchar(*p++);
			putchar('\n');
			ptr++;
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

