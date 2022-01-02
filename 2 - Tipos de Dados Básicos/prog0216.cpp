#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* má implementação!;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch1='X', ch2='Y';
	printf("  Digite um inteiro: ");
	scanf("%d",&ch2);
	printf("  O valor de ch1 = '%c' e ch2 = '%c'\n",ch1,ch2);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

