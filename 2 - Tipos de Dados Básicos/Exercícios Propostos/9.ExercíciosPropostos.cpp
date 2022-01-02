#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite ao usuário uma determinada data no formato dd/mm/aaaa.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int dia, mes, ano;
	printf("\n  Informe uma data no formato dd/mm/aaaa: ");
	scanf("%d %d %d",&dia,&mes,&ano);
	system("cls"); // limpa a tela
	printf("\nA data informada é:  %d/%d/%d\n",dia,mes,ano);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

