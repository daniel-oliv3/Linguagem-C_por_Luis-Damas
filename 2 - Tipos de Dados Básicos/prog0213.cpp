#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch;
	printf("  Introduza um caractere: ");
	//scanf("%c",&ch);
	ch = getchar();
	printf("  O caractere '%c' tem o ASCII nº %d\n",ch,ch);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

