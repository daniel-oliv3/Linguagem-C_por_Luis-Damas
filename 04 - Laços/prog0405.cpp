#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Reescreva o programa anterior de modo a apresentar a tabuada de qualquer 
número introduzido pelo usuario.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, num;
	n=1;
	printf("Digite um número: ");
	scanf("%d",&num);
	while(n <= 10){
		printf(" %2d x %2d = %2d\n",num,n,num*n);
		n=n+1;
	}
	printf("\n");
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

