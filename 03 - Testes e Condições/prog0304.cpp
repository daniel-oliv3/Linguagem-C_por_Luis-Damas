#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que adicione $1.000,00 ao s�lario de um individuo,
caso este seja inferior a $100.000,00.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario;
	printf("\n  Digite o s�lario: ");
	scanf("%f",&salario);
	if(salario<100000)
		salario=salario+1000;
	printf("\n  S�lario final: %.2f\n",salario);	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

