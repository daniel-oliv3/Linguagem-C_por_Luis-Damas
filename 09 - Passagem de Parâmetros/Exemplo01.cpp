#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n;
	puts("  Introduza um nº inteiro: ");
	while(scanf("%d",&n)==0){
		fflush(stdin);  //limpar o buffer de teclado. 
	}
	printf("  Valor inteiro: %d\n",n);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

