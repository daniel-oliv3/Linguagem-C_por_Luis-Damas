#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 605 constant;*/

const int num = 10; //declaração e atribuiação de uma valor a uma constante do tipo inteiro

void inic(int s[]){
	int i;
	for(i=0; i<num; i++){
		s[i]=0;
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, v[num];
	inic(v); //passando o vetor v[] por parametro para a função inic();
	for(i=0; i<num; i++){
		v[i]=i;  //atribuindo o valor do indice correspondente ao vetor v[];
	}
	for(i=num-1; i>=0; i--){  //imprime de 9 a 0 em ordem decrescente.
		printf("%d\n",v[i]);
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

