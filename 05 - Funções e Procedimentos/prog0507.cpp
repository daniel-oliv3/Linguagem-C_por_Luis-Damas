#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite dois numeros ao usuario e apresente na tela o resultado da sua soma e o dobro de cada um deles.;*/


int soma(int a, int b){  //fun��o soma, que devolve a soma de dois inteiros.
	return a+b;
}

int dobro(int x){  //fun��o soma, que devolve a soma de dois inteiros.
	return 2*x;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, i, total;
	printf("\n  Digite dois n�meros: ");
	scanf("%d%d",&n,&i);
	total=soma(n,i);  //atribui��o do resultado de fun��o a uma var
	printf("  %d+%d=%d\n",n,i,total);
	printf("  2*%d=%d e 2*%d=%d\n",n,dobro(n),i,dobro(i));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

