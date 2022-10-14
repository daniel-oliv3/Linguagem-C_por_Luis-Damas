#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* indchr - devolve o indice da primeira ocorrencia do caractere ch na string s.
se o caractere não existir devolve -1, pois zero e um indice possivel(peimeiro elemento da string).
indchar("15 acabate!, 'a')      -->  3
indchar("15 acabate!, '#')      -->  -1


;*/


/*int indchr(char *s, char ch){
	int i;
	for(i=0; s[i]!='\0'; i++)
		if(s[i]==ch)
			return i;
		return -1;	
}*/

int indchr(char *s, char ch){
	int i=0;
	while(s[i]!=ch && s[i]!='\0')
		i++;
	if(s[i]=='\0')
		return -1;
	else
		return i;		
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string[100], resp, ch;
	printf("  Digite uma string: ");
	gets(string);
	printf("  Digite um caractere: ");
	scanf("%c",&ch);
	resp=indchr(string, ch);
	switch(resp){
		case 1:
			printf("\n  O caractere %c existe na string %s (%d)\n",ch,string,resp);
			break;
		case -1:
			printf("\n  O caractere %c não existe na string %s (%d)\a\n",ch,string,resp);
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

