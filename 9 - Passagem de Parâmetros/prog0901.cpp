#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 901 troca de valores;*/

void troca(int a, int b); //prototipo da função

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, k;
	puts("  Introd. dois nºs inteiros: ");
	scanf("%d %d", &n, &k);
	printf("  Antes da troca: n = %d e k = %d\n",n,k);
	troca(n, k);
	printf("  Depois da troca: n = %d e k = %d\n",n,k);
	system("Pause");
	return 0;
}

void troca(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

