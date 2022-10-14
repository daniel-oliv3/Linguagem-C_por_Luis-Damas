#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario;
	printf("\n  Digite o salário: ");
	scanf("%f",&salario);
	if(salario<=0)
		printf("\n  Salário: valor invalido!\a\n");
	else
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

