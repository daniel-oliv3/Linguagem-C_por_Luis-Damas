#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int strlen(char *s){
	char *ptr=s;  //guarda o endereço inicial
	while(*s!='\0')  //enquanto não chergarmos ao fim
		s++;  //incrementa o ponteiro
	return (int) (s-ptr);	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[100];
	printf("\n  Digite uma string: ");
	gets(nome);
	putchar('\n');
	printf("  %d\n",strlen(nome));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

