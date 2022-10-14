#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que indique quantos segundos tem um determinado numero de horas;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n_horas;
	long n_seg;  //pode ser muito grande
	printf("\n  Número de horas: ");
	scanf("%d",&n_horas);
	n_seg=n_horas<0 ? 0 : n_horas*3600L;
	printf("  %d horas tem %ld segundos\n",n_horas,n_seg);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

