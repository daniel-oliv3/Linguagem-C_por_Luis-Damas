#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>

/* int isalpha(char c) Verdade caso c seja uma letra do alfabeto, maiuscula ou minuscula, caso contrario....;*/

int verif_Alfa(char c){  //função que vai verificar se e uma letra do alfabeto
	if(isalpha(c))
		return 1;
	else
		return 2;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char tecla, op;
	printf("\n  Digite uma tecla: ");
	scanf("%c",&tecla);
	system("cls");
	op=verif_Alfa(tecla);
	switch(op){
		case 1:
			printf("\n  O caractere %c é uma letra do alfabeto!\n",tecla);
			break;
		case 2:
			printf("\n  O caractere %c não é uma letra do alfabeto!\n\a",tecla);	
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

