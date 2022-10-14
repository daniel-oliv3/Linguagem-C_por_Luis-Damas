#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* int islower(char c) verdade caso c seja uma letra minuscula. falso caso contrario.;*/

int  letraMinuscula(char c);  //prototipo da função

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char carac, op;
	printf("\n  Digite um caractere: ");
	scanf("%c",&carac);  //função generica scanf
	system("cls");  //limpa a tela
	op=letraMinuscula(carac);
	switch(op){
		case 1:
			printf("\n  O caractere %c é uma letra minúscula!\n",carac);
			break;
		case 2:
			printf("\n  O caractere %c não é uma letra minúscula!\a\n",carac);	
	}
	putchar('\n');
	system("Pause");
	return 0;
}

int letraMinuscula(char c){  //função
	if(islower(c))
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

