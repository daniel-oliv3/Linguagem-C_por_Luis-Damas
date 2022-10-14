#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 9.	[Exercício de Exame]
int Impar(int x)
Devolve Verdade se x for ímpar. Falso no caso contrário.
;*/

int Impar(int x){
	if(x%2==1)
		return 1;
	else
		return 2;
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, resp;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	system("cls");
	resp=Impar(numero);
	switch(resp){
		case 1:
			printf("\n  Verdadeiro!\n");
			break;
		case 2:
			printf("\n  Falso!\n\a");
			break;	
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

