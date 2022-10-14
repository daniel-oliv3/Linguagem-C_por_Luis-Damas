#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* strlen - devolve o numero de caracteres existente na string;*/

/*int strlen(char *s){
	int i=0;
	while(s[i] != '\0'){
		i++;
	}
	return i;
}*/

int strlen(char *s){ // ou int strlen(char s[])
	int i;
	for(i=0; s[i]!='\0'; i++)
	;
	return i;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	char string[100];
	printf("  Digite uma string: ");
	gets(string);
	printf("%d\n",i=strlen(string));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

