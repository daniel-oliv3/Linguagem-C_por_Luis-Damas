#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int strcmp(char *s1, char *s2){
	int i=0;
	while(s1[i]==s2[i]  && s1[i]!='\0')
		i++;
	return (s1[i] - s2[i]);	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch1[100], ch2[100];
	int resp;
	printf("\n  Digite a 1º string: ");
	gets(ch1);
	printf("  Digite a 2º string: ");
	gets(ch2);
	resp=strcmp(ch1, ch2);
	printf("%d\n",resp);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

