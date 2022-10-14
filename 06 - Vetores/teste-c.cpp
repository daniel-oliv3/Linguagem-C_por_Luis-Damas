#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define DIM 3

/* Escreva um programa que coloque o tabuleiro do jogo da velha nesse estado, 
depois de ter sido iniciado com espaços durante a declaração do mesmo,
em seguida mostre o tabuleiro na tela.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char velha[DIM][DIM]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int i, j;
	velha[0][0]='X';
	velha[1][1]='X';
	velha[0][2]='0';
	velha[2][2]='0';
	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++){
			printf("%c %c",velha[i][j],j==DIM-1?' ':'|');
			if(i!=DIM-1) printf("\n--------\n");
				
		}
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

