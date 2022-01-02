#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 10.	[Exercício de Exame]
int Entre(int x, int tlim_inf, in tlim_sup)
Verifica se x se encontra no intervalo lim_inf <= lim_sup
;*/

int Entre(int x, int tlim_inf, int tlim_sup){
	if(x >= tlim_inf && x <= tlim_sup)
		return 1;
	else
		return 2;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero, inicio, fim, op_resp;
	printf("\n  Digite um número: ");
	scanf("%d",&numero);
	printf("  Digite o limite inferior: ");
	scanf("%d",&inicio);
	printf("  Digite o limite superior: ");
	scanf("%d",&fim);
	system("cls");
	op_resp=Entre(numero, inicio, fim);
	switch(op_resp){
		case 1:
			printf("\n  O número %d está no intervalo de %d a %d\n",numero,inicio,fim);
			break;
		case 2:
			printf("\n  O número %d não está no intervalo de %d a %d\n\a",numero,inicio,fim);
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

