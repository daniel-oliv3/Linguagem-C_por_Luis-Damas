#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int strlen(char *s); //prototipo da fun��o

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char s[100];
	char *ptr=s; // aponta para o primeiro caractere de s
	printf("\n  Digite um string: ");
	gets(s);
	printf("%d\n",strlen(s));
	system("Pause");
	return 0;
}

int strlen(char *s){
	char *ptr=s;  //guarda o endere�o inicial
	while(*s!='\0')  //enquanto n�o chergarmos ao fim
		s++;  //incrementa o ponteiro
	return (int)(s-ptr);  //retorna a diferen�a entre os endere�os	
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

