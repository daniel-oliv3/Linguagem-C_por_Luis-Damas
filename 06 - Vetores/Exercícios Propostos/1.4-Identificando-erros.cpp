#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int v[10], i;  //vetor inicializado com 10, abaixo de 7 fica assim _
	for(i=0; i<10; i++)
		v[i]=0;
	v[i]=101;	
	printf("%d\n",v[i]);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

