#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que indique qual o estado civil correspondente a um caracrere introduzido em maiusculas;

Má implementação!!!
sem break;
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char est_civil;
	printf("\n  Digite seu estado civil: ");
	//scanf("%c",&est_civil);
	est_civil=getchar();
	switch(est_civil){
		case 'C':
			printf("  Casado\n");
		case 'S':
			printf("  Solteiro\n");	
		case 'D':
			printf("  Divorciado\n");
		case 'V':
			printf("  Viúvo\n");
		default:
			printf("  Estado civil incorreto\n");			
	}
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

