#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* má implementação!;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num=1000;
	printf("  Digite um caractere: ");
	scanf("%c",&num);
	printf("  O valor de num = %d cujo caractere = '%c'\n",num,(char)num);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

