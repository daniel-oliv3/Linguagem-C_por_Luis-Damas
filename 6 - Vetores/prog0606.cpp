#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define NUM 10  //sem ";" ponto-e-virgula

/* 606 diretiva de pre-processamento #define;*/

void inic(int s[]){
	int i;
	for(i=0; i<NUM; i++){
		s[i]=0;
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, v[NUM];
	inic(v); //passando o vetor v[] por parametro para a função inic();
	for(i=0; i<NUM; i++){
		v[i]=i;  //atribuindo o valor do indice correspondente ao vetor v[];
	}
	for(i=NUM-1; i>=0; i--){  //imprime de 9 a 0 em ordem decrescente.
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

