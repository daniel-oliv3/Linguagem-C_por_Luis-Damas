#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que indique se o inteiro lido � zero ou n�o.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x;
	printf("\n  Digite um n�mero: ");
	scanf("%d",&x);
	if(x)  // se(x for verdadeiro)fa�a....... em vez de  if(x!=0)
		printf("\n  %d n�o � zero!!!\n",x);
	else
		printf("\n  %d � igual a zero!!!\a\n",x);	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

