#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

/* int strpal(char *s)     //String Políndroma;*/

/*int strpal(char *s){
	int i, j, eh=1, n;
	i=0;
	j=(n-1);
	n=strlen(s);
	while((i<=j) && (eh==1)){
		if(toupper(s[i]) != toupper(s[j]))
			eh=0;
		else{
			i=i+1;
			j=j-1;
		}	
	}
	if(eh==1)
		return 1;
	else
		return 2;	
}*/

int strpal(char *s){
	int i, j;
	for(i=0, j=strlen(s)-1; i<j; i++, j--)
		if(s[i] !=s[j])
			return 2;
	return 1;		
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100];
	int resp;
	printf("\n  Digite uma string: ");
	gets(string);
	resp=(int)strpal(string);
	switch(resp){
		case 1:
			printf("\n  Palindromo\n");
			break;
		case 2:
			printf("\n  Não é Palindromo!\a\n");
			break;	
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

