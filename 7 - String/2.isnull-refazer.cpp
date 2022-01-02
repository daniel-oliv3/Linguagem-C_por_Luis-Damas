#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* isnull verifica se uma string contém ou não algum caractere, devolveldo o valor logico correspondente.

-int isnull(char *s) esta função não faz parte da linguagem;*/


/*int isnull(char *s){
	return (s[0] == '\0');
}*/

int isnull(char *s){
	return (strlen(s) == 0);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100], resp;
	printf("\n  Digite uma string: ");
	scanf("%s",string);
	resp=isnull(string);
	printf("%c\n",resp);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

