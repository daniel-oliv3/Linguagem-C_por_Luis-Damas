#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que coloque na tela meia arvore de natal com asterisco. o numero de ramos deverar
ser introduzido pelo usuario

exemplo com 3,4 e 5 ramos.
*          *            *
**         **           **
***        ***          ***
           ****         ****
                        *****
;*/    

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, max;
	printf("\n  Digite um número: ");
	scanf("%d",&max);
	system("cls");
	for(i=1; i<=max; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		putchar('\n');
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

