#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* strdelc - apaga todas as ocorrencias do caractere ch na string s;*/

char *strdelc(char *s, char ch){  //string delete char
	int i, j;
	for(i=j=0; s[i]!='\0'; i++)
		if(s[i]!=ch)
			s[j++]=s[i];
		s[j]='\0';
		return s;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char caractere, string[100];
	printf("\n  Digite uma String: ");
	gets(string);
	printf("  Digite o caractere que vai ser deletado da string: ");
	scanf("%c",&caractere);
	printf("\n  A nova string é: %s\n",strdelc(string, caractere));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

