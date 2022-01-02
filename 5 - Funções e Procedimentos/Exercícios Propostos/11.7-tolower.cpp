#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* char tolower(char c) devolve o valor do caractere e transforma em minusculos;*/

char transf_minusculo(char c){
	return tolower(c);	 
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char carac, resp;
	printf("\n  Digite uma letra(maiúscula): ");
	scanf("%c",&carac);
	system("cls");
	resp=transf_minusculo(carac);
	printf("\n  %c\n",resp);  //minuscula
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

