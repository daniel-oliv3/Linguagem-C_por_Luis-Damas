#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 16.	[Exerc�cio de Exame]
int isVogal(char ch)
Verifica se ch � uma das vogais do alfabeto(min�scula ou mai�scula)
;*/

int isVogal(char ch);

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char carac, resp;
	printf("\n  Digite um caractere: ");
	scanf("%c",&carac);
	system("cls");
	resp=isVogal(carac);
	switch(resp){
		case 1:
			printf("\n  O caractere %c � uma vogal do alfabeto!\n",carac);
			break;
		case 2:
			printf("\n  O caractere %c n�o � uma vogal do alfabeto!\a\n",carac);
			break;	
	}
	putchar('\n');
	system("Pause");
	return 0;
}

int isVogal(char ch){
	if(ch == 'A' || ch == 'a'  || ch == 'E'  || ch == 'e' || ch == 'I' || ch == 'i'  || ch == 'O'  || ch == 'o' || ch == 'U' || ch == 'u')
		return 1;
	else
		return 2;	
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

