#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 100

/* implemente a função
	float max(float v[], int n)
	
	que recebe um vetor de numeros reais e o numero de elementos a considerar.
	Retorna o maior numero entre os n primeiros elementos do vetor
;*/


float max(float v[], int n){
	int i, maior;
	maior=v[1];
	for(i=0; i<n; i++){
		if(maior<v[i]){
			maior=v[i];
		}
	}
	return maior;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, tam;
	float array[TAM], resp;
	printf("\n  Digite o tamanho do array[]: ");
	scanf("%d",&tam);
	for(i=0; i<tam; i++){
		printf("  Digite o %dº número: ",i+1);
		scanf("%f",&array[i]);
	}
	resp=max(array, tam);
	system("cls");
	printf("\n  O maior elemento do array[%d] é: %.2f\n",tam,resp);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

