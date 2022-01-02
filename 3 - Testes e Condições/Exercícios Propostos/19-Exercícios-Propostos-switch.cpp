#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 19.	Escreva um programa que indique o número de dias existentes em um mês (fevereiro = 25 dias);*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int mes;
	printf("\n  Digite um número <1 á 12>: ");
	scanf("%d",&mes);
	switch(mes){
		case 1:
			printf("  Janeiro = 31 dias\n");
			break;
		case 2:
			printf("  Fevereiro = 28 dias\n");
			break;
		case 3:
			printf("  Março = 31 dias\n");
			break;
		case 4:
			printf("  Abril = 30 dias\n");
			break;
		case 5:
			printf("  Maio = 31 dias\n");
			break;
		case 6:
			printf("  Junho = 30 dias\n");
			break;
		case 7:
			printf("  Julho = 31 dias\n");
			break;
		case 8:
			printf("  Agosto = 31 dias\n");
			break;
		case 9:
			printf("  Setembro = 30 dias\n");
			break;
		case 10:
			printf("  Outubro = 31 dias\n");
			break;
		case 11:
			printf("  Novembro = 30 dias\n");
			break;
		case 12:
			printf("  Dezembro = 31 dias\n");
			break;
		default:
			printf("\n  O número tem que estar entre 1 e 12!\n\a");												
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

