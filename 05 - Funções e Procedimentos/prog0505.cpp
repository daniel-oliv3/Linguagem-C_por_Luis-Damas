#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 505;*/

linha(int num){  //Função linha(passagem de paremetro);
	int i;
	for(i=1; i<=num; i++){
		putchar('*');
	}
	putchar('\n');
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	putchar('\n');
	linha(3);  //passando o valor 3 por argumentos para a função linha();
	linha(5);
	linha(7);
	linha(5);
	linha(3);
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

