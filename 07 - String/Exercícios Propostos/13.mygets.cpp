#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* implemente a função char *mygets(char *s) que le uma string do teclado e a coloca no parametro da função, a função deverar ainda devolver a string lida...;*/


char *mygets(char *s){
	int i=0, ch;
	while((ch=getchar())!='\n')
		s[i++]=ch;
	s[i]='\0';
	return s;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

