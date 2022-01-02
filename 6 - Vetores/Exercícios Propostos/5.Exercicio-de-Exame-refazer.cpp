#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int array[TAM];
	
	system("Pause");
	return 0;
}


char *memcpy(char dest[], char * orig, int n){
	int i;
	for(i=0; i<n; i++){
		dest[i]=orig[i];
	}
	return dest;
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

