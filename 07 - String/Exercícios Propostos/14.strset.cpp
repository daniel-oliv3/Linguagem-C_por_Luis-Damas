#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* strset - coloca em todas as posições da string s o caractere ch, devolvendo s;*/

char *strset(char *s, char ch){
	int i;
	for(i=0; s[i]!='\0'; i++)
		s[i]=ch;
	return s;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100], ch;
	printf("\n  Digite uma string: ");
	gets(string);
	printf("  Digite um caractere para substituir a string: ");
	scanf("%c",&ch);
	printf("\n  A nova string é: %s\n",strset(string, ch));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

