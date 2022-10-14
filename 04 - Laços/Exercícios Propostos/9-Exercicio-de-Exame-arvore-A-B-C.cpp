#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Altere o programa anterior de forma que, em vez de asteriscos, sejam escritas letras em cada nivel,
começando o nivel inicial com a letra 'A'.

exemplo com 3,4 e 5 ramos.
A          A            A
BB         BB           BB
CCC        CCC          CCC
           DDDD         DDDD
                        EEEEE
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
			printf("%c",'A'+i-1);
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

