#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* Inverte a string e a devolve invertida;*/

char *strrev(char *s){
	int i, len;
	char aux;
	for(i=0, len=strlen(s)-1; i<len; i++, len--){
		aux=s[i];
		s[i]=s[len];
		s[len]=aux;
	}
	return s;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100], resp;
	printf("\n  Digite uma String: ");
	scanf("%s",&string);
	resp=strrev(string);
	printf("\n  %s",resp);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

