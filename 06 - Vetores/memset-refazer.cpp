#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* ;*/

char* memset(char *[], char ch, int n){
	int i;
	for(i=0; i<n; i++)
		v[i]=ch;
	return v;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, '$',7);
	puts(str);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

