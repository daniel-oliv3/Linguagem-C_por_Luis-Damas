#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente 
e decrescente entre 1 e esse numero.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, n;
	printf("\n  Digite um número: ");
	scanf("%d",&n);
	putchar('\n');
	for(i=1, j=n; i<=n; i++, j--){
		printf("  %d  %d\n",i,n-i+1);
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

