#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* strpad coloca um espaço em branco apos cada um caractere da string s;*/

char *strpad(char *s){
	int i=strlen(s);
	s[2*i]=s[i];  //colocar o delimitadoe na nova posição
	for(i--; i>=0; i--){
		s[2*i]=s[i];
		s[2*i+1]=' ';
	}
	return s;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];
	printf("\n  Digite uma string: ");
	gets(string);
	system("cls");
	printf("\n  A nova string é: %s\n",strpad(string));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

