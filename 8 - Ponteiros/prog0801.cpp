#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x=5, *px = &x;
	float y=5.0, *py = &y;
	printf("%d %ld\n",x,px); //não foi necessario utilizar o castin (long)
	printf("%d %ld\n",x+1,px+1);
	printf("%f %ld\n",y,py);
	printf("%f %ld\n",y+1,py+1);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

