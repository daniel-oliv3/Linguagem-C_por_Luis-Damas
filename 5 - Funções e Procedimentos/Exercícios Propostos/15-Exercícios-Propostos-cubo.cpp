#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 15.	[Exercício de Exame]
int Cubo(int x)
Devolve o valor de x³
;*/

int cubo(int num);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, resultado;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	system("cls");
	resultado=cubo(numero);
	printf("\n  O resultado do cubo de %d é: %d\n",numero,resultado);
	system("Pause");
	return 0;
}

int cubo(int num){
	return num*num*num;
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

