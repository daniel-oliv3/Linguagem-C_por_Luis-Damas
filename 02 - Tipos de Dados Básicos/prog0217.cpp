#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa em c que pe�a ao usuario dois inteiros e apresente o resultado da das opera��es aritmeticas tradicionais;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int a, b;
	printf("  Digite doid n�meros inteiros: ");
	scanf("%d %d",&a,&b);
	printf("  %d + %d = %d\n",a,b,a+b);
	printf("  %d - %d = %d\n",a,b,a-b);
	printf("  %d * %d = %d\n",a,b,a*b);
	printf("  %d / %d = %d\n",a,b,a/b);
	printf("  %d %% %d = %d\n",a,b,a%b);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

