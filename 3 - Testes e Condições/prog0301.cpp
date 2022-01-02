#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um programa que solicite ao utilizador dois inteiros e, em seguida, aplique todos
os operadores relacionais de c aos inteiros lios.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x, y;
	printf("\n  Digite o primeiro número inteiro: ");
	scanf("%d",&x);
	printf("  Digite o segundo número inteiro: ");
	scanf("%d",&y);
	printf("\n  O resuldado de %d == %d   : %d\n",x,y,x==y);
	printf("  O resuldado de %d >  %d   : %d\n",x,y,x>y);
	printf("  O resuldado de %d >= %d   : %d\n",x,y,x>=y);
	printf("  O resuldado de %d <  %d   : %d\n",x,y,x<y);
	printf("  O resuldado de %d <= %d   : %d\n",x,y,x<=y);
	printf("  O resuldado de %d != %d   : %d\n",x,y,x!=y);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

