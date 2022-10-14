#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Altere o programa anterior prog0317 de tal forma que permita indicar, a partir de um tederminado numero de horas,
quais os minutos, os segundos ou mesmo os decimos de segundos que esse numero de horas contem.
;*/

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
	scanf("%s",&tipo);  //no livro esta %c
	if(tipo=='m' || tipo=='M')
		res=n_horas<0 ? 0 : n_horas*60L;  //operador ternario
	else
		if(tipo=='s' || tipo=='S')
			res=n_horas<0 ? 0 : n_horas*3600L;
		else
			if(tipo=='d' || tipo=='D')
				res=n_horas<0 ? 0 : n_horas*36000L;
	printf("\n  %dh  --> %ld%c\n",n_horas,res,tipo);					
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

