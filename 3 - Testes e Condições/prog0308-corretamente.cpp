#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* má-indentação!!!;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b;
	printf("\n Digite um número para A: ");
	scanf("%d",&a);
	printf(" Digite um número para B: ");
	scanf("%d",&b);
	if(a>=0)
		{ if(b>10)
			printf("\n  B é muito grande!\n");
		}
	else
		printf("\n  A tem um valor negativo!\n");		
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

