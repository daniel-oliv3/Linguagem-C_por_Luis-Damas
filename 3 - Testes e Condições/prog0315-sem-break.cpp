#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que calcule o imposto pago por mulheres e por homens, sabendo que as mulheres
pagam 10% de imposto e que os homens pagam mais %% do que as mulheres.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float salario, imposto=0.0;
	char sexo;
	printf("\n  Digite o seu salário: ");
	scanf("%f",&salario);
	printf("  Informe o seu sexo <f/m>: ");
	scanf("%s",&sexo);  //no livro esta %c, mais não executa aqui. utilizei %s
	switch(sexo){
		case 'f': //mulher
		case 'F':
			imposto=imposto+0.10;  // no livro esta 0.05 mais o exer anterior e 0.10
		case 'm':  //homen
		case 'M':
			imposto=imposto+0.05;
	}
	printf("\n  Imposto %.2f\n",salario*imposto);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

