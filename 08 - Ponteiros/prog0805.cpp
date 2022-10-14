#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int x=5;
	int *ptr_x;  //ponteiro para x
	int **ptr_ptr_x; //ponteiro para ponteiro de x
	//carga inicial dos ponteiros
	ptr_x=&x;
	ptr_ptr_x=&ptr_x;
	printf("x = %d - &x = %ld\n",x,&x);
	printf("x = %d - &x = %ld\n",*ptr_x,ptr_x);
	printf("x = %d - &x = %ld\n",**ptr_ptr_x, *ptr_ptr_x);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

