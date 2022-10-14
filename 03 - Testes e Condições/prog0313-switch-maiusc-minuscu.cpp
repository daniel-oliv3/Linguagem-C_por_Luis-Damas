#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que indique qual o estado civil correspondente a um caracrere introduzido em maiusculas;

altere o programa anterior de maneira a funcionar com maiusculos e minusculo;
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
		case 'c':
		case 'C':
			printf("  Casado\n");
			break;
		case 's':	
		case 'S':
			printf("  Solteiro\n");	
			break;
		case 'd':	
		case 'D':
			printf("  Divorciado\n");
			break;
		case 'v':	
		case 'V':
			printf("  Viúvo\n");
			break;
		default:
			printf("  Estado civil incorreto\n\a");			
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

