#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva  um programa que solicite um salario ao utilizador e mostre o imposto a pagar.
se o salario for negativo ou zero mostrar erro respectivo.
se o salario for maior que 1000, pagar 10% de imposto, se não pagar 5%.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario;
	printf("\n  Digite o salário: ");
	scanf("%f",&salario);
	if(salario<=0)
		printf("\n  Salário: valor inválido!\a\n");
	if(salario>1000)
		printf("\n  Imposto = %.2f\n",salario*0.10);
	else
		printf("\n  Imposto = %.2f\n",salario*0.05);		
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

