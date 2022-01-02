#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/


char *strchr(char *str, char ch){  //Versão 1
	int i;
	for(i=0; str[i] != '\0'; i++)
		if(str[i] == ch)
			return &str[i];
	return NULL;		
}

char *strchr1(char *str, char ch){  //Versão 2
	while(*str != '\0')
		if(*str == ch)
			return str;
		else
			str++;
	return NULL;					
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char s[100], c;
	printf("Introd. uma string: ");
	gets(s);
	printf("Introd. um char: ");
	scanf("%c",&c);
	puts(strchr(s, c));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

