#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* programa que inicia os vetores em 0, passados por parametros de uma função;*/

void inic1(int s[10]){
	int i;
	for(i=0; i<10; i++){
		s[i]=0;
		printf(" Y[%d] = %d\n",i,s[i]);
	}
}

void inic2(int s[20]){
	int i;
	for(i=0; i<20; i++){
		s[i]=0;
		printf(" X[%d] = %d\n",i,s[i]);
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int v[10];
	int x[20];
	inic1(v);  //inicia o vetor v usando a função inici1
	putchar('\n');
	inic1(x);  //inicia o vetor x usando a função inici2
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

