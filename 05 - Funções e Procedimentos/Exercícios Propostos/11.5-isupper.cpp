#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* int isupper(char c) verdade caso c seja uma letra maiúscula. falso caso contrario;*/

int letraMaiuscula(char c);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char carac, op;
	printf("\n  Digite um caractere: ");
	scanf("%c",&carac);
	system("cls");
	op=letraMaiuscula(carac);
	switch(op){
		case 1:
			printf("\n  O caractere %c é uma letra maiúscula!\n",carac);
			break;
		case 2:
			printf("\n  O caractere %c não é uma letra maiúscula!\a\n",carac);
			break;	
	}
	putchar('\n');
	system("Pause");
	return 0;
}


int letraMaiuscula(char c){
	if(isupper(c))
		return 1;
	else
		return 2;	
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

