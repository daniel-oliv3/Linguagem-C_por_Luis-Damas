#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* implemente em c as seguintes funções - int strcounta(char *s)
devolve o numero de caracteres alfanumerico em s
;*/

int strcounta(char *s){
	int cont = 0;
	int i;
	for(i=0; i<strlen(s); i++){
		if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'x' || s[i] == 'z' || s[i] == 'y' || s[i] == 'k' ||  s[i] == 'w'){
		 cont++;
		}else{
			if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z' || s[i] == 'W' || s[i] == 'K') {
				cont++;
			}
		}
	}
	return cont;
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[50];
	int total=0;
	printf("\n  Digite uma string: ");
	gets(string);
	total=strcounta(string);
	system("cls");
	printf("\n  O Número total de caracteres da string é: %d\n",total);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

