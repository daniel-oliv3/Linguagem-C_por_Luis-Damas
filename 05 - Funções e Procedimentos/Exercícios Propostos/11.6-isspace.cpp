#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* int isspace(char c) verdade caso c seja um espaço ou um TAB. falso caso contrario;*/

int espacoTab(char c){
	if(isspace(c))
		return 1;
	else
		return 2;	
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char carac, op;
	printf("\n  Digite um caractere: ");
	scanf("%c",&carac);
	system("cls");
	op=espacoTab(carac);
	switch(op){
		case 1:
			printf("\n  O caractere %c é um espaço em branco ou um TAB!\n",carac);
			break;
		case 2:
			printf("\n  O caractere %c não é um espaço em branco ou um TAB!\a\n",carac);
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

