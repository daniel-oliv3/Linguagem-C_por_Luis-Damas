#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que leia dois numeros e os apresente por ordem crescente.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x, y, tmp;
	printf("\n  Digite o 1º número: ");
	scanf("%d",&x);
	printf("  Digite o 2º número: ");
	scanf("%d",&y);
	if(x>y){
		tmp=x;
		x=y;
		y=tmp;
	}
	printf("\n  %d %d\n",x,y);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

