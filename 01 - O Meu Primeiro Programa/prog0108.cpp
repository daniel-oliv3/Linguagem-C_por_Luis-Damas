#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa em c que indique qual o significado dos seguintes caracteres; \n \\, \t %%;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	printf("Programa que apresenta os caracteres especiais\n\n");
	printf("\\n\t-\t<ENTER>\n"); /*saida:   \n	 -	 <ENTER>	*/
	printf("\\\\\t-\t\\\n");    /*saida:	\\	 -   \		    */
	printf("\\t\t-\t<TAB>\n");  /* saida:   \\	 <	 <TAB>      */	
	printf("%%%%\t-\t%%\n");   /*saida:     %%   -     %        */
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

