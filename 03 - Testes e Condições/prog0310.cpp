#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que calcule os aumentos de ordenado para o corrente ano.
se o ordenado for > 1000 deve ser aumentado 5%, se não deve ser 7%.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario;
	printf("\n  Qual o salário: ");
	scanf("%f",&salario);
	if(salario>1000)
		salario=salario*1.05;
	else
		salario=salario*1.07;	
	printf("  Novo salário: %.2f\n",salario);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

