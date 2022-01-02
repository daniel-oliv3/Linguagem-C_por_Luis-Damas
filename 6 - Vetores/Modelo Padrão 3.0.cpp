#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 4

/* 47. Faca uma funcao que receba uma matriz 4 x 4 e retorne quantos valores maiores do que
10 ela possui.;*/

int maiorValores(int matriz[tam][tam]){
	int i, j, cont;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(matriz[i][j]>10)
				cont++;
		}
	}
	return cont;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, mat[tam][tam], resultado;
	putchar('\n');
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("  Digite o %dº número: ",j+1);
			scanf("%d",&mat[i][j]);
		}
		putchar('\n');
	}
	system("cls");
	resultado=maiorValores(mat);
	printf("\n  O total de números maiores que 10 na matriz[%d][%d] é: %d\n",tam,tam,resultado);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

