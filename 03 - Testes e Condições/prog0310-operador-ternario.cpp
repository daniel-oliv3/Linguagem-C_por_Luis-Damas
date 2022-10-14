#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario;
	printf("\n  Qual o salário: ");
	scanf("%f",&salario);
	salario=salario>1000 ? salario*1.05 : salario*1.07;  //operador ternario
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

