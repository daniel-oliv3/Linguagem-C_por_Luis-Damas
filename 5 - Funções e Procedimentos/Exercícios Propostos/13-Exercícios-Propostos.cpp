#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 13.	[Exerc�cio de Exame]
int Minus(valor)
Devolve o valor recebido sempre como n�mero negativo

Minus(10)		-->		-10 
Minus(-10)		-->		-10 
;*/

int Minus(int valor){
	return -valor;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, result;
	printf("\n  Digite um n�mero inteiro: ");
	scanf("%d",&numero);
	system("cls");
	result=Minus(numero);
	printf("\n  O n�mero �: %d\n",result);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

