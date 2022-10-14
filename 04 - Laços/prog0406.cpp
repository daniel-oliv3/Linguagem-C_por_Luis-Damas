#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 05 - Escreva o conjuno das cinco primeiras tabuadas(tabuada do 1,2,3,4,5);*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int n, num;
	num=1;
	while(num <= 5){
		n=1;
		while(n <= 10){
			printf("%2d x %2d = %2d\n",num,n,num*n);
			n=n+1;
		}
		/*passar a proxima tabuada*/
		num=num+1;
		putchar('\n'); // quebra de linha
	}
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

