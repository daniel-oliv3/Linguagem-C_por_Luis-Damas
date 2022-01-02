#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>  // para a função isdigit

/* strcountc - devolve o numero de ocorrencias do caracter ch na string s.

strcount("abacate", 'a')     --> 3
strcount("abacate", 'y')     --> 0


;*/

int strcountc(char *s, char ch){
	int i, conta;
	for(i=conta=0; s[i]!='\0'; i++){
		if(s[i]==ch){  //se for o caractere que procuramos
			conta++;  //incrementa o contador
		}
	}
	return conta;
}

//devolve o numero de digitos na string s
//strcountd("15 abacates")   -> 2
//strcountd("quinze abacates")   -> 0

int strcountd(char *s){
	int i, conta;
	for(i=conta=0; s[i]!='\0'; i++){
		if(isdigit(s[i])){   //se o caractere for um digito
			conta++;  //incrementa contador
		}
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

