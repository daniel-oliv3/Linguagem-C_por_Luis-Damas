#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que indique se o inteiro lido é zero ou não.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x;
	printf("\n  Digite um número: ");
	scanf("%d",&x);
	if(x)  // se(x for verdadeiro)faça....... em vez de  if(x!=0)
		printf("\n  %d não é zero!!!\n",x);
	else
		printf("\n  %d é igual a zero!!!\a\n",x);	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

