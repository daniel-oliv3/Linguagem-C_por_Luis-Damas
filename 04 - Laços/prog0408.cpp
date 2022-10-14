#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 07 - Escreva um programa que coloque na tela as cinco primeiras tabuadas, 
parando a tela depois de cada uma delas a  ser escrita;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j;
	for(i=1; i<=5; i=i+1){
		printf("%2d x %2d = %2d\n",i,j,i*j);
		if(i != 5){  //para não parar na ultima
			printf("Pressione <ENTER> para continuar ...");
			getchar();  //limpa o buffer do teclado
		}
	}	
	putchar('\n'); // quebra de linha
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

