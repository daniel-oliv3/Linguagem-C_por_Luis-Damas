#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 604;*/

void inic(int s[]){  //função que recebe por parametro um vetor[] inteiro
		int i;
		for(i=0; i<10; i++){
			s[i]=0;  //atribui o valor 0 a todos os indices do vetor[]
		}
	}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int vetor[10], i;
	inic(vetor);
	for(i=0; i<10; i++){
		vetor[i]=i;
	}
	putchar('\n');
	for(i=10; i>=0; i--){
		printf("%d\n",vetor[i]);
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

