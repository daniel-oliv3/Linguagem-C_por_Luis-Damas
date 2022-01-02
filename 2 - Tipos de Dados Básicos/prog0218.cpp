#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa em c que solicite um determinado número de segundos e, em seguida,
indique quantas horas, minutos e segundos esse valor representa.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	long int n_segundos;
	printf("  Digite o nº de segundos: ");
	scanf("%ld",&n_segundos);
	printf("  Horas: %d\n",(int)n_segundos/3600);
	printf("  Minutos: %d\n",(int)(n_segundos%3600/60));
	printf("  Segundos: %d\n",(int)n_segundos%60);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

