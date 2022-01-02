#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define MAX 3

/* ;*/

void transpor(int v[MAX][MAX]){
	int i, j;
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			printf("  Mat[%d][%d] = %d\n",i,j,v[i][j]);
		}
		putchar('\n');
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, mat[MAX][MAX];
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			printf("  Digite o %dº número: ",j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	system("cls");
	transpor(mat);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

