#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>  //para a função isdigit

/* int strcountd(char *s)  // string Count Digits
Devolve o numero de digitos na string s

strcountd("15 abacates")    -> 2
strcountd("quinze abacates")	-> 0

;*/

int strcountd(char *s){
	int i, conta;
	for(i=conta=0; s[i]!='\0'; i++){
		if(isdigit(s[i]))   //se o caractere for um digito
			conta++;  //imcrementa o contador
	}
	return conta;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

