#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que leia uma opera��o binaria entre dois inteiros e apresente em seguida o
resultado dessa opera��o sobre os dois inteiros.

Corretamente!!!
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2, resp=0;
	char op;
	printf("\n  Digite uma express�o: ");
	scanf("%d %c %d",&num1,&op,&num2);  //numero <operador> numero
	switch(op){
		case '+':  //soma
			resp=num1+num2;
			break;
		case '-':  //subtra��o
			resp=num1-num2;
			break;
		case '*':  //Multiplica��o
		case 'x':
		case 'X':	
			resp=num1*num2;
			break;
		case '/':  //divis�o
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
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

