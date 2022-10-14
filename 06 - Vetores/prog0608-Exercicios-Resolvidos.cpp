#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que declare um vetor cp, n=10 numeros reais e coloque na i-ésima posição o resultado de i*(n-1);*/

	const int n=10; //declarando uma constante de inteiro com o valor 10

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float v[n];
	int i;
	for(i=0; i<n; i++)
		v[i] = i*(n-1);
	for(i=0; i<n; i++)
		printf("%f\n",v[i]);		
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

