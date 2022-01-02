#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que indique se um numero e positivo (>=0) ou negativo.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x;
	printf("\n  Digite um número: ");
	scanf("%d",&x);
	if(x>=0) //teste condicional... se(x maior ou igual a 0)faça
		printf("\n  Número positivo!\n");
	else  // caso contrario
		printf("\n  Número negativo!\a\n");	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

