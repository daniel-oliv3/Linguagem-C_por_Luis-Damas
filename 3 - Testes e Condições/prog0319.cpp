#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Resolva o mesmo enunciado utilizando um switch;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n_horas;
	long res;
	char tipo;
	printf("\n  Número de horas: ");
	scanf("%d",&n_horas);
	printf("  O que mostrar (m/s/d): ");
	scanf("%s",&tipo); // no livro esta %c, no meu compilador não aceita o %c, so o %s.
	switch(tipo){
		case 'm':
		case 'M':
			res=n_horas<0 ? 0 : n_horas*60L;  // termario
			break;
		case 's':
		case 'S':
			res=n_horas<0 ? 0 : n_horas*3600L;
			break;
		case 'd':
		case 'D':
			res=n_horas<0 ? 0 : n_horas*36000L;
			break;
	}
	printf("\n  %dh --> %dl%c\n",n_horas,res,tipo);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

