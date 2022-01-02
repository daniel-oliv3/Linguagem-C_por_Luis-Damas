#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

/* Escreva o utilitário upper, que converte toda a entrada proveniente de um arquivo ou entrada-padrão
para maiúscula, cujas sintaxe é

upper[arquivo];*/

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	FILE *fp;
	int ch;
	switch(argc){
		case 1:
			fp = stdin;
			break;
		case 2:
			if((fp=fopen(argv[1],"r"))==NULL){
				fprintf(stderr,"Imp. abrir o arq %s\n",argv[1]);
				exit(1);
			}
			break;
		default:
			fprintf(stderr,"Sintaxe:\n\n%s [Arquivo]\n",argv[0]);
			exit(2);		
	}
	while((ch=fgetc(fp))!=EOF)
		putchar(toupper(ch));
	fclose(fp);	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

