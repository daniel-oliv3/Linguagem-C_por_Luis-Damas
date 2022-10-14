#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario, taxa;
	printf("%f",&salario);
	if(salario<1000)
		taxa=.05;
	else
		if(salario<5000)
			taxa=.11;
		else
			taxa=.35;
	printf("Salário: %.2f Imposto: %.2f Liquido: %.2f\n",salario,salario*taxa,salario*(1.0-taxa));			
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

