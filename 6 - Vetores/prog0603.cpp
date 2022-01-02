#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/


void inic(int s[], int n){  //função. quando declarada acima de man não necessita de prototipo da função
	int i;
	for(i=0; i<n; i++){
		s[i]=0;
		}
	}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int v[10]; //declarando um vetor v de [10] posições.
	int x[20];
	
	inic(v, 10);
	inic(x, 20);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

