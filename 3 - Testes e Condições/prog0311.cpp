#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que, dada uma letra , indique qual o estado civil dessa pessoa.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char est_civil;
	puts("\n  Qual o estado civil: ");
	est_civil=getchar();
	if(est_civil=='S' || est_civil=='s')
		printf("Solteiro\n");
	else
		if(est_civil=='C' || est_civil=='c')
			printf("Casado\n");
		else
			if(est_civil=='D'  || est_civil=='d')
				printf("Divorciado\n");
			else
				if(est_civil=='V' || est_civil=='v')
					printf("Viúvo\n");
				else
					printf("Estado civil invalido!\a\n");
	putchar('\n'); //quebra de linha							
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

