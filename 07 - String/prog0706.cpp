#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//#include<string.h>

/*esse programa faz distinção entre maiusculas e minusculas. ;*/

int strcmp(char *s1, char *s2){
	int i=0;
	while(s1[i]==s2[i] && s1[i]!='\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[30+1];
	do{
		printf("Nome: ");
		gets(nome);
		puts(nome); //imrime na tela
	}while(strcmp(nome, "SAIR")!=0);
	puts("Terminou o programa");
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

