#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>  // para a fun��o toupper

/* strupr - coloca todos os caracteres da string s em maiuscula.;*/

char *strupr(char *s){
	int i;
	for(i=0; s[i]!='\0'; i++)
		s[i]=toupper(s[i]);
	return s;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];
	printf("\n  Digite uma string em letras min�sculas: ");
	gets(string);
	putchar('\n');
	printf("  A nova string �: %s\n",strupr(string));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

