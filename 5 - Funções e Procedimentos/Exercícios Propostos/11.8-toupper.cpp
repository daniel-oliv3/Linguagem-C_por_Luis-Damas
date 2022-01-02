#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* char toupper(char c) devolve o valor do caractere e transforma em maiuculas;*/

char transf_maiuscula(char c);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char carac;
	printf("\n  Digite uma letra(minúscula): ");
	scanf("%c",&carac);
	system("cls");
	printf("\n  %c\n",transf_maiuscula(carac));  //maiuscula
	system("Pause");
	return 0;
}

char transf_maiuscula(char c){
	return toupper(c);
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

