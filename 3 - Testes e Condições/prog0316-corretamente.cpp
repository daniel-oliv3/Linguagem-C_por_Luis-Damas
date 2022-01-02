#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que leia uma operação binaria entre dois inteiros e apresente em seguida o
resultado dessa operação sobre os dois inteiros.

Corretamente!!!
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, resp=0;
	char op;
	printf("\n  Digite uma expressão: ");
	scanf("%d %c %d",&num1,&op,&num2);  //numero <operador> numero
	switch(op){
		case '+':  //soma
			resp=num1+num2;
			break;
		case '-':  //subtração
			resp=num1-num2;
			break;
		case '*':  //Multiplicação
		case 'x':
		case 'X':	
			resp=num1*num2;
			break;
		case '/':  //divisão
		case '\\':
		case ':':  	
			resp=num1/num2;
			break;			
	}
	printf("\n  %d %c %d = %d\n",num1,op,num2,resp);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

