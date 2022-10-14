#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 06 - Escreva um programa que calcule a soma e o produto dos n primeiros numeros naturais.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, num, soma, produto;
	printf("Digite um número: ");
	scanf("%d",&num);
	for(soma=0, n=produto=1; n <= num; n=n+1){
		soma = soma + n;
		produto = produto * n;
	}
	printf("Soma = %d\nProduto = %d\n",soma,produto);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

