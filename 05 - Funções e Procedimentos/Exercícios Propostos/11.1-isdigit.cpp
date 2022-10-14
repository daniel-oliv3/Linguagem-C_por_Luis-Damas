#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>  //funções tipo char

/* int isdigit(char c)  verdade caso c seja um digito. falso caso contrario;*/

int Isdigit(char c){
	if(isdigit(c))
		return 1;
	else
		return 2;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char ch, op;
	printf("\n  Digite uma tecla do telado: ");
	scanf(" %c",&ch);
	system("cls");
	op=Isdigit(ch);
	switch(op){
		case 1:
			printf("\n  O caracter %c é um digito (número)\n",ch);
			break;
		case 2:
			printf("\n  O caracter %c não é um digito (número)\n\a",ch);
			break;
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

