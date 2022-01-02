#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que leia uma operação binaria entre dois inteiros e apresente em seguida o
resultado dessa operação sobre os dois inteiros.

má programação!!!
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	char op;
	printf("\n  Digite uma expressão: ");
	scanf("%d %c %d",&num1,&op,&num2);  //numero <operador> numero
	switch(op){
		case '+':  //soma
			printf("\n  %d + %d = %d\n",num1,num2,num1+num2);
			break;
		case '-':  //subtração
			printf("\n  %d - %d = %d\n",num1,num2,num1-num2);
			break;
		case '*':  //Multiplicação
		case 'x':
		case 'X':	
			printf("\n  %d * %d = %d\n",num1,num2,num1*num2);
			break;
		case '/':  //divisão
		case '\\':
		case ':':  	
			printf("\n  %d + %d = %d\n",num1,num2,num1/num2);
			break;			
	}
	putchar('\n');  //quebra de linha
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

