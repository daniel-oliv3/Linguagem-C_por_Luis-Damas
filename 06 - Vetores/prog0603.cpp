#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/


void inic(int s[], int n){  //fun��o. quando declarada acima de man n�o necessita de prototipo da fun��o
	int i;
	for(i=0; i<n; i++){
		s[i]=0;
		}
	}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int v[10]; //declarando um vetor v de [10] posi��es.
	int x[20];
	
	inic(v, 10);
	inic(x, 20);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

