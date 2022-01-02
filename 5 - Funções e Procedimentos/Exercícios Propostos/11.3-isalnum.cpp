#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* int isalnum(char c) verdade caso c seja um digito ou uma letra do alfabeto. falso caso contrario;*/

int digito_letra(char c){
	if(isalnum(c))
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
	op=digito_letra(carac);
	switch(op){
		case 1:
			printf("\n  O caractere %c é uma letra (ou um digito)!\n",carac);
			break;
		case 2:
			printf("\n  O caractere %c não é uma letra e nem um digito!\n\a",carac); //caractere especial
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

