#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* m�-indenta��o!!!;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b;
	printf("\n Digite um n�mero para A: ");
	scanf("%d",&a);
	printf(" Digite um n�mero para B: ");
	scanf("%d",&b);
	if(a>=0)
		{ if(b>10)
			printf("\n  B � muito grande!\n");
		}
	else
		printf("\n  A tem um valor negativo!\n");		
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

