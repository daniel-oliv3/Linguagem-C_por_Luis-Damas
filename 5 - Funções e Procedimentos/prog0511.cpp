#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

float pot(float x, int n){
	float res;
	int i;
	for(i=1, res=1.0; i<=n; i++){
		res*=x;   //res = res * x;
	}
	return res;
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("\n  %f %f %f\n\n",pot(2.0,4),pot(.234,3),pot(3.0,0));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

