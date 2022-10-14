#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 01 Escreva um programa que coloque na tela os 10 primeiros numeros inteiros;
A saída que pretendemos na tela e a seguinte:

1
2
3
4
5
6
7
8
9
10
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	i=1;
	while(i <= 10){
		printf("%d\n",i);
		i=i+1; //i++;
	}
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

