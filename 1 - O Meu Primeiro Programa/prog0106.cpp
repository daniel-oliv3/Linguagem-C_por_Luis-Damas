#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* escreva um programa em c que apresente a seguinte saída;
1 - 	Clientes
2 - 	Fornecedores
3 -		Faturas

0 - 	Sair

*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("1 -\tClientes\n");  // \t para tabulação
	printf("2 -\tFornecedores\n");
	printf("3 -\tFaturas\n\n");  //mais de uma quebra de linha
	printf("0 -\tSair\n");
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

