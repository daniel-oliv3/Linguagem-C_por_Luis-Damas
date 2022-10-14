#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que aplique uma taxa de imposto de 10% aos solteiros e de 9% aos casados.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario;
	char est_civil;
	printf("\n  Qual o salário: ");
	scanf("%f",&salario);
	printf("  Qual o Estado Civil: ");
	scanf("%s",&est_civil);  //no livro esta %c mais nao aceita, passa direto
	fflush(stdin);
	if(est_civil=='C' || est_civil=='c')
		printf("\n  Imposto: %.2f\n",salario*0.09);
	else
		if(est_civil=='S' || est_civil=='s')
			printf("\n  Imposto: %.2f\n",salario*0.10);
		else
			printf("\n  Estado Civil incorreto!!\n\a");  	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

