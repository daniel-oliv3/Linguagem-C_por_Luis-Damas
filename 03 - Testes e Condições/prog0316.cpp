#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que leia uma opera��o binaria entre dois inteiros e apresente em seguida o
resultado dessa opera��o sobre os dois inteiros.

m� programa��o!!!
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	char op;
	printf("\n  Digite uma express�o: ");
	scanf("%d %c %d",&num1,&op,&num2);  //numero <operador> numero
	switch(op){
		case '+':  //soma
			printf("\n  %d + %d = %d\n",num1,num2,num1+num2);
			break;
		case '-':  //subtra��o
			printf("\n  %d - %d = %d\n",num1,num2,num1-num2);
			break;
		case '*':  //Multiplica��o
		case 'x':
		case 'X':	
			printf("\n  %d * %d = %d\n",num1,num2,num1*num2);
			break;
		case '/':  //divis�o
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
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

