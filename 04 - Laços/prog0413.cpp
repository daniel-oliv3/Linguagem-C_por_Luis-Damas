#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 413 - Escreva um programa que coloque os seguintes numeros na tela
1
1 2
1 2 3
.....
1 2 3 4 5 6 7 8 9 10
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j;
	for(i=1; i<=10; i=i+1){
		for(j=1; j<=i; j=j+1){
			printf("%d ",j);
		}
		putchar('\n'); //quebra de linha
	}
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

