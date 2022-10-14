#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite ao usuario a idade, o montante a depositar e o nº
de conta em que se quer realizar o deposito, declarando as variaveis como short, int, long;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	short int idade;   //ou short idade
	int montante;
	long int n_conta;  //ou long n_conta
	printf("  Qual a idade: ");
	scanf("%hd",&idade);  //o formato de leitura e escrita de variaveis inteiras short e long nas funçoes printf e scanf deve ser precedido dos prefixos h (short) e l (long).
	printf("  Qual o montante a depositar: ");
	scanf("%d",&montante);
	printf("  Qual o nº de conta: ");
	scanf("%ld",&n_conta);
	printf("  Uma pessoa de %hd anos depositou $%d na conta %ld\n",idade,montante,n_conta);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

